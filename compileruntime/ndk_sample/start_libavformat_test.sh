#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
#生成lavf.rm文件
mkdir -p tests/vsynth1
./tests/audiogen tests/data/asynth1.sw
./tests/videogen 'tests/vsynth1/'
echo "TEST    lavf-rm"
./tests/fate-run.sh fate-lavf-rm "" "" "./" 'lavf_container "" "-c:a ac3_fixed" disable_crc' '' './tests/ref/lavf/rm' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavformat/tests/noproxy
echo "TEST    noproxy"
./tests/fate-run.sh fate-noproxy "" "" "libavformat/tests/" 'run noproxy' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavformat/tests/srtp
echo "TEST    srtp"
./tests/fate-run.sh fate-srtp "" "" "libavformat/tests/" 'run srtp' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavformat/tests/url
echo "TEST    url"
./tests/fate-run.sh fate-url "" "" "libavformat/tests/" 'run url' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavformat/tests/movenc
echo "TEST    movenc"
./tests/fate-run.sh fate-movenc "" "" "libavformat/tests/" 'run movenc' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavformat/tests/seek
echo "TEST    seek-lavf-rm"
./tests/fate-run.sh fate-seek-lavf-rm "" "" "./" 'run libavformat/tests/seek ./tests/data/lavf/lavf.rm' '' './tests/ref/seek/lavf-rm' '' '1' '' '' '' '' '' '' '' '' '' ''
