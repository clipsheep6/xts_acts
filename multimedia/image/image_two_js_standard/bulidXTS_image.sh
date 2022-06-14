#!/bin/sh

# make test code
cd ~ && cd StageOpenharmony/
rm -rf out/rk3568/obj/test/xts/acts/multimedia/image/
cd test/xts/acts
./build.sh system_size=standard target_subsystem=multimedia

# cp linux file to windows
cp -rf /home/l/StageOpenharmony/out/rk3568/suites /mnt/hgfs/OHOS_out_win

# change config.xml
cd /mnt/hgfs/OHOS_out_win/suites/acts/config
rm user_config.xml
cp user_config_bak.xml user_config.xml
chmod 777 user_config.xml