#!/bin/bash
# Copyright (c) 2021-2022 Huawei Device Co., Ltd.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
chmod +x libavfilter/tests/dnn-layer-pad
echo "TEST    dnn-layer-pad"
./tests/fate-run.sh fate-dnn-layer-pad "" "" "libavfilter/tests" 'run dnn-layer-pad' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-conv2d
echo "TEST    dnn-layer-conv2d"
./tests/fate-run.sh fate-dnn-layer-conv2d "" "" "libavfilter/tests" 'run dnn-layer-conv2d' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-dense
echo "TEST    dnn-layer-dense"
./tests/fate-run.sh fate-dnn-layer-dense "" "" "libavfilter/tests" 'run dnn-layer-dense' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-depth2space
echo "TEST    dnn-layer-depth2space"
./tests/fate-run.sh fate-dnn-layer-depth2space "" "" "libavfilter/tests" 'run dnn-layer-depth2space' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-mathbinary
echo "TEST    dnn-layer-mathbinary"
./tests/fate-run.sh fate-dnn-layer-mathbinary "" "" "libavfilter/tests" 'run dnn-layer-mathbinary' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-maximum
echo "TEST    dnn-layer-maximum"
./tests/fate-run.sh fate-dnn-layer-maximum "" "" "libavfilter/tests" 'run dnn-layer-maximum' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-mathunary
echo "TEST    dnn-layer-mathunary"
./tests/fate-run.sh fate-dnn-layer-mathunary "" "" "libavfilter/tests" 'run dnn-layer-mathunary' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavfilter/tests/dnn-layer-avgpool
echo "TEST    dnn-layer-avgpool"
./tests/fate-run.sh fate-dnn-layer-avgpool "" "" "libavfilter/tests" 'run dnn-layer-avgpool' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
