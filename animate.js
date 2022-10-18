
//页面滚动了多少 我们可以通过window.pageYOffset 得到

function animate(obj, target, callback) {
    // if (target > document.body.scrollHeight) {
    //     target = document.body.scrollHeight
    // }
    clearInterval(obj.timer);
    //先清除之前的定时器，只保留一个定时器执行
    obj.timer = setInterval(function () {
        //  步数值写到定时器里面
        //把我们的步长值改为整数 不要出现小数的问题
        //var step = Math.ceil((target - obj.offsetLeft) / 10)
        var step = (target - window.pageYOffset) / 10;
        step = step > 0 ? Math.ceil(step) : Math.floor(step);
        console.log(1111111)
        if (window.pageYOffset == target) {
            //停止动画 本质就是停止定时器
            clearInterval(obj.timer)
            //回调函数写到定时器里面
            callback && callback();
        }
        //页面滚动了多少 我们可以通过window.pageYOffset 得到
        //把每次的值加1 这个步长值改为一个慢慢变小的值 步长公式：（目标值 - 现在的位置） /10
        // obj.style.left = window.pageYOffset + step + "px";
        window.scroll(0, window.pageYOffset + step)
    }, 20)
}
export default animate;


animate(state, element.offsetTop, function () {
  // alert("滚动到了");
  let aside = document.getElementsByClassName("aside")[0];
  console.log(aside.childNodes);
  for (let index = 0; index < aside.childNodes.length; index++) {
    aside.childNodes[index].style.fontWeight = "400";
  }

  e.target.style.fontWeight = "600";
});