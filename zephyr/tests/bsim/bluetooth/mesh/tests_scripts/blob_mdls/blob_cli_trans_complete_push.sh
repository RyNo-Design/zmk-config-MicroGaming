#!/usr/bin/env bash
# Copyright 2022 Nordic Semiconductor
# SPDX-License-Identifier: Apache-2.0

source $(dirname "${BASH_SOURCE[0]}")/../../_mesh_test.sh

# Test that BLOB Transfer completes successfully in Push mode
RunTest blob_success_push blob_cli_trans_complete \
	blob_srv_trans_complete blob_srv_trans_complete \
	blob_srv_trans_complete blob_srv_trans_complete

overlay=overlay_psa_conf
RunTest blob_success_push_psa blob_cli_trans_complete \
	blob_srv_trans_complete blob_srv_trans_complete \
	blob_srv_trans_complete blob_srv_trans_complete
