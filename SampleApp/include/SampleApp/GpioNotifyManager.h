#ifndef ALEXA_CLIENT_SDK_SAMPLEAPP_INCLUDE_SAMPLEAPP_GPIONOTIFYMANAGER_H_
#define ALEXA_CLIENT_SDK_SAMPLEAPP_INCLUDE_SAMPLEAPP_GPIONOTIFYMANAGER_H_

#include <memory>

#include <AVSCommon/SDKInterfaces/DialogUXStateObserverInterface.h>
#include <wiringPi.h>

namespace alexaClientSDK {
namespace sampleApp {

class GpioNotifyManager
        : public avsCommon::sdkInterfaces::DialogUXStateObserverInterface {
public:
    /**
     * Constructor
     */
    GpioNotifyManager();

    /**
     * UXDialogObserverInterface methods
     */
    void onDialogUXStateChanged(DialogUXState newState) override;

private:

    /**
     * An internal executor that performs execution of callable objects passed to it sequentially but asynchronously.
     */
    avsCommon::utils::threading::Executor m_executor;
};

}  // namespace sampleApp
}  // namespace alexaClientSDK

#endif  // ALEXA_CLIENT_SDK_SAMPLEAPP_INCLUDE_SAMPLEAPP_GPIONOTIFYMANAGER_H_
