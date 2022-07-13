import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'
const logTag = "[xtsLog]"

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        setEventTypeFilterCallback( this.context);
    }

    onAccessibilityEvent(accessibilityEvent) {

    }

    onKeyEvent(keyEvent) {
        console.info(" onKeyEvent");
        console.info(logTag + "onKeyEvent KeyInterception AccessibilityAllD: " + JSON.stringify(keyEvent));
        return true;
    }
}


const setEventTypeFilterCallback = (context) => {
    console.info(logTag + "Accessibility setEventTypeFilterCallback  Start");
    const eventType = ['accessibilityFocus', 'accessibilityFocusClear', 'click', 'longClick', 'focus', 'select', 'hoverEnter', 'hoverExit',
    'textUpdate', 'textSelectionUpdate', 'scroll'];
    context.setEventTypeFilter(eventType, ((err, res) => {
        if (err?.code) {
            console.info(logTag + "err=" + JSON.stringify(err));
            return;
        }
        console.info(logTag + "res=" + JSON.stringify(res));
    }));
    console.info(logTag + "End");
}

export default ServiceExtAbility