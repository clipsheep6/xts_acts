// parent.js
export default {
    data: {
        showsome: false,
        text: 'I am parent component!',
    },
    parentClicked () {
        this.showsome = !this.showsome;
        console.info('parent component get parent text');
        console.info(`${this.$parent().text}`);
        console.info("parent component get child function");
        console.info(`${this.$child('selfDefineChild').childClicked()}`);
    },
}