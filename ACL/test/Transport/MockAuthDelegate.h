/**
 * MockAuthDelegate.h
 *
 * Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */
#ifndef ALEXA_CLIENT_SDK_ACL_TEST_TRANSPORT_MOCK_AUTH_DELEGATE_H_
#define ALEXA_CLIENT_SDK_ACL_TEST_TRANSPORT_MOCK_AUTH_DELEGATE_H_

#include "ACL/AuthDelegateInterface.h"
#include "ACL/AuthObserverInterface.h"

#include <gmock/gmock.h>

#include <memory>
#include <string>

namespace alexaClientSDK {
namespace acl {
namespace test {

class MockAuthDelegate: public AuthDelegateInterface {
public:
    MOCK_METHOD1(setAuthObserver, void(std::shared_ptr<AuthObserverInterface>));
    MOCK_METHOD0(getAuthToken, std::string());
};

} // namespace test
} // namespace acl
} // namespace alexaClientSDK

#endif // ALEXA_CLIENT_SDK_ACL_TEST_TRANSPORT_MOCK_AUTH_DELEGATE_H_