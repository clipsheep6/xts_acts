#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
chmod +x libswscale/tests/pixdesc_query
echo "TEST    sws-pixdesc_query"
./tests/fate-run.sh fate-sws-pixdesc-query "" "" "libswscale/tests/" 'run pixdesc_query' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libswscale/tests/floatimg_cmp
echo "TEST    sws-floatimg_cmp"
./tests/fate-run.sh fate-sws-floatimg-cmp "" "" "libswscale/tests/" 'run floatimg_cmp' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''
