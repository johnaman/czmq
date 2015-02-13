/*  =========================================================================
    czmq_selftest.c - run selftests

    Runs all selftests.

    -------------------------------------------------------------------------
    Copyright (c) 1991-2012 iMatix Corporation -- http://www.imatix.com                
    Copyright other contributors as noted in the AUTHORS file.                         
                                                                                       
    This file is part of CZMQ, the high-level C binding for 0MQ: http://czmq.zeromq.org
                                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public                
    License, v. 2.0. If a copy of the MPL was not distributed with this                
    file, You can obtain one at http://mozilla.org/MPL/2.0/.                           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#include "czmq_classes.h"

int
main (int argc, char *argv [])
{
    bool verbose;
    if (argc == 2 && streq (argv [1], "-v"))
        verbose = true;
    else
        verbose = false;

    printf ("Running czmq selftests...\n");

    zactor_test (verbose); 
    zauth_test (verbose); 
    zarmour_test (verbose); 
    zbeacon_test (verbose); 
    zcert_test (verbose); 
    zcertstore_test (verbose); 
    zchunk_test (verbose); 
    zclock_test (verbose); 
    zconfig_test (verbose); 
    zdigest_test (verbose); 
    zdir_test (verbose); 
    zdir_patch_test (verbose); 
    zfile_test (verbose); 
    zframe_test (verbose); 
    zgossip_test (verbose); 
    zhashx_test (verbose); 
    ziflist_test (verbose); 
    zlistx_test (verbose); 
    zloop_test (verbose); 
    zmonitor_test (verbose); 
    zmsg_test (verbose); 
    zpoller_test (verbose); 
    zproxy_test (verbose); 
    zrex_test (verbose); 
    zsock_test (verbose); 
    zsock_option_test (verbose); 
    zstr_test (verbose); 
    zsys_test (verbose); 
    zuuid_test (verbose); 
    zgossip_msg_test (verbose); 
    zauth_v2_test (verbose); 
    zbeacon_v2_test (verbose); 
    zctx_test (verbose); 
    zhash_test (verbose); 
    zlist_test (verbose); 
    zmonitor_v2_test (verbose); 
    zmutex_test (verbose); 
    zproxy_v2_test (verbose); 
    zsocket_test (verbose); 
    zsockopt_test (verbose); 
    zthread_test (verbose); 

    printf ("Tests passed OK\n");
    return 0;
}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
