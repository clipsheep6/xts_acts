import AccessibilityExtensionAbility, { AccessibilityEvent } from '@ohos.application.AccessibilityExtensionAbility';

class AccessibilityExtAbility extends AccessibilityExtensionAbility {
    /**
     * Called when your accessibility service is successfully connected to the OS. You can implement
     * this method to perform subsequent initialization operations.
     */
    onConnect() {
        console.log("[AccessibilityExtAbility] onConnect");
    }

    /**
     * Called when your accessibility service is successfully disconnected to the OS.
     */
    onDisconnect() {
        console.log("[AccessibilityExtAbility] onDisconnect");
    }

    /**
     * Called when an accessibility event occurs, such as when the user touches the application interface.
     * @param event Indicates an accessibility event.
     */
    onAccessibilityEvent(accessibilityEvent: AccessibilityEvent) {
        console.log("[AccessibilityExtAbility] onAccessibilityEvent type: " + accessibilityEvent.eventType);
    }
}

export default AccessibilityExtAbility;