// SPDX-License-Identifier: Apache-2.0
// Copyright Pionix GmbH and Contributors to EVerest

#include "serial_ioImpl.hpp"

namespace module {
namespace serial_io {

void serial_ioImpl::init() {
}

void serial_ioImpl::ready() {
}

std::string serial_ioImpl::handle_read() {
    // your code for cmd read goes here
    return "everest";
}

std::string serial_ioImpl::handle_write(std::string& bytes) {
    // your code for cmd write goes here
    return "everest";
}

} // namespace serial_io
} // namespace module
