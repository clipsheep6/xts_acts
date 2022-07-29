import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'
const logTag = "[xtsLog]"

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
    }

    onAccessibilityEvent(accessibilityEvent) {
    }

    onKeyEvent(keyEvent) {
        console.info(" onKeyEvent");
        console.info(logTag + "onKeyEvent KeyInterception AccessibilityAllD: " + JSON.stringify(keyEvent));
        return true;
    }
}

export default ServiceExtAbility