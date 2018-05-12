#include "SampleApp/GpioNotifyManager.h"
#include "SampleApp/ConsolePrinter.h"

namespace alexaClientSDK {
namespace sampleApp {

GpioNotifyManager::GpioNotifyManager() {

}

void GpioNotifyManager::onDialogUXStateChanged(DialogUXState state) {
    swhich (state) {
        case DialogUXState::IDLE:
            m_executor.submit([]() { ConsolePrinter::simplePrint("[my-message] IDLE"); });        
            break;
        case DialogUXState::LISTENING:
            m_executor.submit([]() { ConsolePrinter::simplePrint("[my-message] LISTENING"); });        
            break;
        case DialogUXState::THINKING:
            m_executor.submit([]() { ConsolePrinter::simplePrint("[my-message] THINKING"); });        
            break;
        case DialogUXState::SPEAKING:
            m_executor.submit([]() { ConsolePrinter::simplePrint("[my-message] SPEAKING"); });                
            break;
        case DialogUXState::FINISHED:
            m_executor.submit([]() { ConsolePrinter::simplePrint("[my-message] FINISHED"); });
            break;
        default:
            break;        
    }



}


}  // namespace sampleApp
}  // namespace alexaClientSDK
