//
// VMime library (http://www.vmime.org)
// Copyright (C) 2002 Vincent Richard <vincent@vmime.org>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 3 of
// the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Linking this library statically or dynamically with other modules is making
// a combined work based on this library.  Thus, the terms and conditions of
// the GNU General Public License cover the whole combination.
//

#ifndef VMIME_UTILITY_ENCODER_B64ENCODER_HPP_INCLUDED
#define VMIME_UTILITY_ENCODER_B64ENCODER_HPP_INCLUDED


#include "vmime/utility/encoder/encoder.hpp"


namespace vmime {
namespace utility {
namespace encoder {


/** Base64 encoder.
  */
class VMIME_EXPORT b64Encoder : public encoder {

public:

	b64Encoder();

	size_t encode(
		utility::inputStream& in,
		utility::outputStream& out,
		utility::progressListener* progress = NULL
	);

	size_t decode(
		utility::inputStream& in,
		utility::outputStream& out,
		utility::progressListener* progress = NULL
	);

	const std::vector <string> getAvailableProperties() const;

	size_t getEncodedSize(const size_t n) const;
	size_t getDecodedSize(const size_t n) const;

protected:

	static const unsigned char sm_alphabet[];
	static const unsigned char sm_decodeMap[256];
};


} // encoder
} // utility
} // vmime


#endif // VMIME_UTILITY_ENCODER_B64ENCODER_HPP_INCLUDED
