// xxx.ets
@Entry
@Component
struct CalendarPickerDialogExampleA {
  private selectedDate: Date = new Date()
  build() {
    Column() {
      Button("CalendarPickerDialog按esc弹窗逐层退出").key('Calendar_dialog_A')
        .margin(20)
        .onClick(() => {
          console.info("CalendarDialog.show")
          CalendarPickerDialog.show({
            selected: this.selectedDate,
            onAccept: (value) => {
              console.info("calendar onAccept:" + JSON.stringify(value))
            },
            onCancel: () => {
              console.info("calendar onCancel")
            },
            onChange: (value) => {
            }
          })
          CalendarPickerDialog.show({
            selected: this.selectedDate,
            onAccept: (value) => {
              console.info("calendar onAccept:" + JSON.stringify(value))
            },
            onCancel: () => {
              console.info("calendar onCancel")
            },
            onChange: (value) => {
              console.info("calendar onChange:" + JSON.stringify(value))
            }
          })
        })
    }.width('100%').margin({top:200})
  }
}