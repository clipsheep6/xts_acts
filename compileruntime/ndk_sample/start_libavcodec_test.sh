#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
chmod +x ./libavcodec/tests/fft
echo "TEST    dct1d-4"
./tests/fate-run.sh fate-dct1d-4 "" "" "libavcodec/tests/" 'run fft  -n4 -d' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    idct1d-4"
./tests/fate-run.sh fate-idct1d-4 "" "" "libavcodec/tests/" 'run fft  -n4 -d -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    idct1d-5"
./tests/fate-run.sh fate-idct1d-5 "" "" "libavcodec/tests/" 'run fft  -n5 -d -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    irdft-7"
./tests/fate-run.sh fate-irdft-7 "" "" "libavcodec/tests/" 'run fft  -n7 -r -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    irdft-12"
./tests/fate-run.sh fate-irdft-12 "" "" "libavcodec/tests/" 'run fft  -n12 -r -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/fft-fixed32
echo "TEST    fft-fixed32-4"
./tests/fate-run.sh fate-fft-fixed32-4 "" "" "libavcodec/tests/" 'run fft-fixed32  -n4' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    imdct-fixed32-4"
./tests/fate-run.sh fate-imdct-fixed32-4 "" "" "libavcodec/tests/" 'run fft-fixed32  -n4 -m -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    imdct-fixed32-5"
./tests/fate-run.sh fate-imdct-fixed32-5 "" "" "libavcodec/tests/" 'run fft-fixed32  -n5 -m -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    imdct-fixed32-6"
./tests/fate-run.sh fate-imdct-fixed32-6 "" "" "libavcodec/tests/" 'run fft-fixed32  -n6 -m -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    imdct-fixed32-8"
./tests/fate-run.sh fate-imdct-fixed32-8 "" "" "libavcodec/tests/" 'run fft-fixed32  -n8 -m -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    mdct-fixed32-10"
./tests/fate-run.sh fate-mdct-fixed32-10 "" "" "libavcodec/tests/" 'run fft-fixed32' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    imdct-fixed32-11"
./tests/fate-run.sh fate-imdct-fixed32-11 "" "" "libavcodec/tests/" 'run fft-fixed32  -n11 -m -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/avfft
echo "TEST    av-dct1d-4"
./tests/fate-run.sh fate-av-dct1d-4 "" "" "libavcodec/tests/" 'run avfft  -n4 -d' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    av-idct1d-5"
./tests/fate-run.sh fate-av-idct1d-5 "" "" "libavcodec/tests/" 'run avfft  -n5 -d -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    av-idct1d-12"
./tests/fate-run.sh fate-av-idct1d-12 "" "" "libavcodec/tests/" 'run avfft  -n12 -d -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    av-ifft-10"
./tests/fate-run.sh fate-av-ifft-10 "" "" "libavcodec/tests/" 'run avfft  -n10 -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    av-imdct-9"
./tests/fate-run.sh fate-av-imdct-9 "" "" "libavcodec/tests/" 'run avfft  -n9 -m -i' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/avpacket
echo "TEST    avpacket"
./tests/fate-run.sh fate-avpacket "" "" "libavcodec/tests/" 'run avpacket' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/cabac
echo "TEST    cabac"
./tests/fate-run.sh fate-cabac "" "" "libavcodec/tests/" 'run cabac' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/codec_desc
echo "TEST    codec_desc"
./tests/fate-run.sh fate-codec_desc "" "" "libavcodec/tests/" 'run codec_desc' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/golomb
echo "TEST    golomb"
./tests/fate-run.sh fate-golomb "" "" "libavcodec/tests/" 'run golomb' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/dct
echo "TEST    idct8x8-0"
./tests/fate-run.sh fate-idct8x8-0 "" "" "libavcodec/tests/" 'run dct -i 0' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    idct8x8-1"
./tests/fate-run.sh fate-idct8x8-1 "" "" "libavcodec/tests/" 'run dct -i 1' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    idct8x8-2"
./tests/fate-run.sh fate-idct8x8-2 "" "" "libavcodec/tests/" 'run dct -i 2' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    idct248"
./tests/fate-run.sh fate-idct248 "" "" "libavcodec/tests/" 'run dct -4' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/iirfilter
echo "TEST    iirfilter"
./tests/fate-run.sh fate-iirfilter "" "" "libavcodec/tests/" 'run iirfilter' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/rangecoder
echo "TEST    rangecoder"
./tests/fate-run.sh fate-rangecoder "" "" "libavcodec/tests/" 'run rangecoder' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/jpeg2000dwt
echo "TEST    j2k-dwt"
./tests/fate-run.sh fate-j2k-dwt "" "" "libavcodec/tests/" 'run jpeg2000dwt' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/avcodec
echo "TEST    libavcodec-avcodec "
./tests/fate-run.sh fate-libavcodec-avcodec "" "" "libavcodec/tests/" 'run avcodec' 'null' '' '' '1' '' '' '' '' '' '' '' '' '' ''

chmod +x libavcodec/tests/htmlsubtitles
echo "TEST    Libavcodec-htmlsubtitles"
./tests/fate-run.sh fate-libavcodec-htmlsubtitles "" "" "./" 'run libavcodec/tests/htmlsubtitles' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''

