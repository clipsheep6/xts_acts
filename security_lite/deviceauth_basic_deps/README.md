## hi3516dv300

1. add the following in test/xts/acts/security/BUILD.gn

``` json
      "deviceauth/deviceauth_basic_deps:ActsDeviceAuthBasicDepsTest",
```

2. compile command:

``` bash
cd test/xts/acts
pushd ../../.. ; pwd ; echo $(find ./out/hi3516dv300/ -name deviceauth_basic_deps | xargs rm -rf) ; popd ; ./build.sh target_subsystem=security system_size=standard
```

3. run command:

``` bash
hdc_std shell mount -o rw,remount /
hdc_std file send .\out\hi3516dv300\suites\acts\testcases\ActsDeviceAuthBasicDepsTest /bin/
hdc_std shell chmod +x /bin/ActsDeviceAuthBasicDepsTest
hdc_std shell ActsDeviceAuthBasicDepsTest
```

## wifiiot_hispark_pegasus

1. compile command:

``` bash
cd test/xts/tools/lite
./build.sh product=wifiiot xts=acts target=//test/xts/acts/security_lite/deviceauth_basic_deps:ActsSecurityHichainBasicDeps
```
