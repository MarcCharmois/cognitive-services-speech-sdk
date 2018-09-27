//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

#pragma once

#include <memory>
#include "spx_namespace.h"

namespace Microsoft {
namespace CognitiveServices {
namespace Speech {
namespace Impl {

class ISpxAudioPump;

class Microphone
{
public:
    // TODO: add parameters to allow specifing a device to use if
    // multiple are available (not sure if we really need it).
    static std::shared_ptr<ISpxAudioPump> Create();
private:
    Microphone() = delete;
};

} } } } // Microsoft::CognitiveServices::Speech::Impl