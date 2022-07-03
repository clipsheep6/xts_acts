#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
chmod +x libavutil/tests/adler32
echo "TEST    adler32"
./tests/fate-run.sh fate-adler32 "" "" "libavutil/tests/" 'run adler32' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/aes
echo "TEST    aes"
./tests/fate-run.sh fate-aes "" "" "libavutil/tests/" 'run aes' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/aes_ctr
echo "TEST    aes_ctr"
./tests/fate-run.sh fate-aes_ctr "" "" "libavutil/tests/" 'run aes_ctr' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/camellia
echo "TEST    camellia"
./tests/fate-run.sh fate-camellia "" "" "libavutil/tests/" 'run camellia' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/cast5
echo "TEST    cast5"
./tests/fate-run.sh fate-cast5 "" "" "libavutil/tests/" 'run cast5' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/audio_fifo
echo "TEST    audio_fifo"
./tests/fate-run.sh fate-audio_fifo "" "" "libavutil/tests/" 'run audio_fifo' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/avstring
echo "TEST    avstring"
./tests/fate-run.sh fate-avstring "" "" "libavutil/tests/" 'run avstring' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/blowfish
echo "TEST    blowfish"
./tests/fate-run.sh fate-blowfish "" "" "libavutil/tests/" 'run blowfish' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/bprint
echo "TEST    bprint"
./tests/fate-run.sh fate-bprint "" "" "libavutil/tests/" 'run bprint' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/cpu
echo "TEST    cpu"
./tests/fate-run.sh fate-cpu "" "" "libavutil/tests/" 'runecho cpu  -t1' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/crc
echo "TEST    crc"
./tests/fate-run.sh fate-crc "" "" "libavutil/tests/" 'run crc' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/color_utils
echo "TEST    color_utils"
./tests/fate-run.sh fate-color_utils "" "" "libavutil/tests/" 'run color_utils' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/des
echo "TEST    des"
./tests/fate-run.sh fate-des "" "" "libavutil/tests/" 'run des' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/dict
echo "TEST    dict"
./tests/fate-run.sh fate-dict "" "" "libavutil/tests/" 'run dict' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/encryption_info
echo "TEST    encryption_info"
./tests/fate-run.sh fate-encryption-info "" "" "libavutil/tests/" 'run encryption_info' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/eval
echo "TEST    eval"
./tests/fate-run.sh fate-eval "" "" "libavutil/tests/" 'run eval' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/fifo
echo "TEST    fifo"
./tests/fate-run.sh fate-fifo "" "" "libavutil/tests/" 'run fifo' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/
echo "TEST    hash"
./tests/fate-run.sh fate-hash "" "" "libavutil/tests/" 'run hash' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/hash
echo "TEST    hmac"
./tests/fate-run.sh fate-hmac "" "" "libavutil/tests/" 'run hmac' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/imgutils
echo "TEST    imgutils"
./tests/fate-run.sh fate-imgutils "" "" "libavutil/tests/" 'run imgutils' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/integer
echo "TEST    integer"
./tests/fate-run.sh fate-integer "" "" "libavutil/tests/" 'run integer' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/lfg
echo "TEST    lfg"
./tests/fate-run.sh fate-lfg "" "" "libavutil/tests/" 'run lfg' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/md5
echo "TEST    md5"
./tests/fate-run.sh fate-md5 "" "" "libavutil/tests/" 'run md5' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/murmur3
echo "TEST    murmur3"
./tests/fate-run.sh fate-murmur3 "" "" "libavutil/tests/" 'run murmur3' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/parseutils
echo "TEST    parseutils"
./tests/fate-run.sh fate-parseutils "" "" "libavutil/tests/" 'run parseutils' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/pixfmt_best
echo "TEST    pixfmt_best"
./tests/fate-run.sh fate-pixfmt_best "" "" "libavutil/tests/" 'run pixfmt_best' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''
chmod +x libavutil/tests/display
echo "TEST    display"
./tests/fate-run.sh fate-display "" "" "libavutil/tests/" 'run display' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/random_seed
echo "TEST    random_seed"
./tests/fate-run.sh fate-random_seed "" "" "libavutil/tests/" 'run random_seed' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''
chmod +x libavutil/tests/ripemd
echo "TEST    ripemd"
./tests/fate-run.sh fate-ripemd "" "" "libavutil/tests/" 'run ripemd' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/sha
echo "TEST    sha"
./tests/fate-run.sh fate-sha "" "" "libavutil/tests/" 'run sha' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/sha512
echo "TEST    sha512"
./tests/fate-run.sh fate-sha512 "" "" "libavutil/tests/" 'run sha512' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/tree
echo "TEST    tree"
./tests/fate-run.sh fate-tree "" "" "libavutil/tests/" 'run tree' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/twofish
echo "TEST    twofish"
./tests/fate-run.sh fate-twofish "" "" "libavutil/tests/" 'run twofish' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/xtea
echo "TEST    xtea"
./tests/fate-run.sh fate-xtea "" "" "libavutil/tests/" 'run xtea' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/tea
echo "TEST    tea"
./tests/fate-run.sh fate-tea "" "" "libavutil/tests/" 'run tea' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/opt
echo "TEST    opt"
./tests/fate-run.sh fate-opt "" "" "libavutil/tests/" 'run opt' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/cpu_init
echo "TEST    cpu_init"
./tests/fate-run.sh fate-cpu_init "" "" "libavutil/tests/" 'run cpu_init' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavutil/tests/pixelutils
echo "TEST    pixelutils"
./tests/fate-run.sh fate-pixelutils "" "" "libavutil/tests/" 'run pixelutils' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''
