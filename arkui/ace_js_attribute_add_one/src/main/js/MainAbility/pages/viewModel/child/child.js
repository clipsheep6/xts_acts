// child.js
export default {
    data: {
        showsome: false,
        text: 'I am child component!',
    },
    childClicked () {
        this.showsome = !this.showsome;
        console.info('child component get parent text');
        console.info(this.$parent().text);
        console.info('child component get root text');
        console.info(this.$root().text);
        return "childClicked fuction return something"
    },
}