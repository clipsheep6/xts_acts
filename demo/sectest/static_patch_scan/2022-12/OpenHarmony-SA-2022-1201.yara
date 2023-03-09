import "console"
import "elf"
rule OpenHarmony_SA_2022_1201
{
meta:

date = "2022-12"
openharmony_sa = "OpenHarmony-SA-2022-1201"
cve = "CVE-2022-45877"
severity = "high"
affected_files = "pin_auth_ui.so" //3.1.x以后的版本
affected_func = "AuthOnDataReceived"

strings:

$fix = "authManager is null"  //更新后字符串

$vul = "ShowPinDialog authManager is null" //更新前字符串

condition:
 (elf.machine == elf.EM_ARM) and ((not $vul) and $fix) and console.log("OpenHarmony-SA-2022-1201 testcase pass")
}