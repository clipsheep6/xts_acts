import router from '@system.router';
export default {
  goBack() {
    console.log('pagelength: ' + router.getLength());
    const routeLength = router.getLength();
    if (routeLength > 1) {
      router.back();
    } else {
      router.push({
        uri: 'pages/index/index'
      })
    }
  }
}
