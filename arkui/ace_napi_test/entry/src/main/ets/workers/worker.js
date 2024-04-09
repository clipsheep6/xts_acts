import worker, { MessageEvents } from "@ohos.worker";
import napitest from 'libnapitest.so'

const workPort = worker.workerPort;

workPort.onmessage = (e) => {
  let data = e.data;
  if (data === "call napi_run_event_loop with nowait") {
    let result = napitest.runEventLoopTest005();
    workPort.postMessage(result);
  }
  if (data === "call napi_run_event_loop with default") {
    let result = napitest.runEventLoopTest006();
    workPort.postMessage(result);
  }
  if (data === "call napi_stop_event_loop") {
    let result = napitest.stopEventLoopTest004();
    workPort.postMessage(result);
  }
}
