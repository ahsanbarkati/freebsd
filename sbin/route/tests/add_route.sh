#-
# SPDX-License-Identifier: BSD-2-Clause-FreeBSD
#
# Copyright (c) 2020 Ahsan Barkati
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
# $FreeBSD$
#

. $(atf_get_srcdir)/utils.subr

atf_test_case "v4" "cleanup"
v4_head()
{
	atf_set descr 'Route add test for v4'
	atf_set require.user root
	atf_set require.progs jq
}

v4_body()
{   
   	epair=$(vnet_mkepair)
	ifconfig ${epair}b 192.0.2.2/24 up
	vnet_mkjail alcatraz ${epair}a
	jexec alcatraz ifconfig ${epair}a 192.0.2.1/24 up

	# add a new route in the jail
	jexec alcatraz route add 192.0.2.3 192.0.2.2
	gateway=$(check_route "alcatraz" "192.0.2.3")

	if [ "${gateway}" != "192.0.2.2" ]; then
		atf_fail "Route not found"
	fi
}

v4_cleanup()
{
	vnet_cleanup
}

atf_init_test_cases()
{
	atf_add_test_case "v4"
}
