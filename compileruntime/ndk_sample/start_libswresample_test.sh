#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
chmod +x ./ffmpeg
./tests/audiogen tests/data/asynth-22050-6.wav 22050 6
./tests/audiogen tests/data/asynth-44100-2.wav 44100 2
./tests/audiogen tests/data/asynth-2626-1.wav 2626 1
./tests/audiogen tests/data/asynth-96000-1.wav 96000 1
./tests/audiogen tests/data/asynth-48000-1.wav 48000 1
./tests/audiogen tests/data/asynth-44100-1.wav 44100 1

echo "TEST    filter-firequalizer"
./tests/fate-run.sh fate-filter-firequalizer "" "" "" './ffmpeg -auto_conversion_filters -i tests/data/asynth-44100-2.wav -filter_script tests/filtergraphs/firequalizer -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-44100-2.wav' '' '' '' '' '' '' '1058400 - 1097208' 's16' '' '' '' ''
echo "TEST    mapchan-6ch-extract-2"
./tests/fate-run.sh fate-mapchan-6ch-extract-2 "" "" "" './ffmpeg -i tests/data/asynth-22050-6.wav -map_channel 0.0.0 -fflags +bitexact -f wav md5: -map_channel 0.0.1 -fflags +bitexact -f wav md5:' '' '' '' '1' '' '' '' '' '' '' '' '' '' ''
echo "TEST    swr-resample-s16p-2626-8000"
./tests/fate-run.sh fate-swr-resample-s16p-2626-8000 "" "" "" './ffmpeg -i tests/data/asynth-2626-1.wav -af atrim=end_sample=10240,aresample=8000:internal_sample_fmt=s16p:exact_rational=0:linear_interp=0,aformat=s16p,aresample=2626:internal_sample_fmt=s16p:exact_rational=0:linear_interp=0 -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-2626-1.wav' '' '1' '' '' '' '' '31512 - 20482' 's16' '' '' '' ''
echo "TEST    swr-resample-s16p-2626-48000"
./tests/fate-run.sh fate-swr-resample-s16p-2626-48000 "" "" "" './ffmpeg -i tests/data/asynth-2626-1.wav -af atrim=end_sample=10240,aresample=48000:internal_sample_fmt=s16p:exact_rational=0:linear_interp=0,aformat=s16p,aresample=2626:internal_sample_fmt=s16p:exact_rational=0:linear_interp=0 -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-2626-1.wav' '' '1' '' '' '' '' '31512 - 20480' 's16' '' '' '' ''
echo "TEST    swr-resample_exact_lin-dblp-96000-44100"
./tests/fate-run.sh fate-swr-resample_exact_lin-dblp-96000-44100 "" "" "" './ffmpeg -i tests/data/asynth-96000-1.wav -af atrim=end_sample=10240,aresample=44100:internal_sample_fmt=dblp:exact_rational=on:linear_interp=on,aformat=dblp,aresample=96000:internal_sample_fmt=dblp:exact_rational=on:linear_interp=on -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-96000-1.wav' '' '1' '' '' '' '' '1152000 - 20480' 's16' '' '' '' ''
echo "TEST    swr-resample_exact_lin-dblp-96000-8000"
./tests/fate-run.sh fate-swr-resample_exact_lin-dblp-96000-8000 "" "" "" './ffmpeg -i tests/data/asynth-96000-1.wav -af atrim=end_sample=10240,aresample=8000:internal_sample_fmt=dblp:exact_rational=on:linear_interp=on,aformat=dblp,aresample=96000:internal_sample_fmt=dblp:exact_rational=on:linear_interp=on -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-96000-1.wav' '' '1' '' '' '' '' '1152000 - 20496' 's16' '' '' '' ''
echo "TEST    swr-resample_exact_lin-fltp-48000-96000"
./tests/fate-run.sh fate-swr-resample_exact_lin-fltp-48000-96000 "" "" "" './ffmpeg -i tests/data/asynth-48000-1.wav -af atrim=end_sample=10240,aresample=96000:internal_sample_fmt=fltp:exact_rational=on:linear_interp=on,aformat=fltp,aresample=48000:internal_sample_fmt=fltp:exact_rational=on:linear_interp=on -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-48000-1.wav' '' '1' '' '' '' '' '576000 - 20480' 's16' '' '' '' ''
echo "TEST    swr-resample_exact_lin-fltp-44100-8000"
./tests/fate-run.sh fate-swr-resample_exact_lin-fltp-44100-8000 "" "" "" './ffmpeg -i tests/data/asynth-44100-1.wav -af atrim=end_sample=10240,aresample=8000:internal_sample_fmt=fltp:exact_rational=on:linear_interp=on,aformat=fltp,aresample=44100:internal_sample_fmt=fltp:exact_rational=on:linear_interp=on -f wav -c:a pcm_s16le -' '' 'tests/data/asynth-44100-1.wav' '' '1' '' '' '' '' '529200 - 20486' 's16' '' '' '' ''
echo "TEST    acodec-mp2"
./tests/fate-run.sh fate-acodec-mp2 "" "" "./" 'enc_dec wav tests/data/asynth-44100-2.wav mp2 "-b:a 128k -c mp2 -b:a 128k" wav "-c pcm_s16le " "-keep"' '' './tests/ref/acodec/mp2' '' '1' '' '' '-1924' '' '' '2' '' '' '' ''
