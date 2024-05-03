// SPDX-License-Identifier: Apache-2.0
// Copyright Pionix GmbH and Contributors to EVerest
#include "SerialIO.hpp"

namespace module {

void SerialIO::init() {
    invoke_init(*p_serial_io);
}

void SerialIO::ready() {
    invoke_ready(*p_serial_io);
}

} // namespace module
