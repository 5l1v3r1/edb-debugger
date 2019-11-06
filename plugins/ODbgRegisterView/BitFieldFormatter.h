/*
Copyright (C) 2015 Ruslan Kabatsayev <b7.10110111@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef BITFIELD_FORMATTER_H_
#define BITFIELD_FORMATTER_H_

#include <QString>
#include <vector>

namespace ODbgRegisterView {

class BitFieldDescription;

class BitFieldFormatter {
public:
	explicit BitFieldFormatter(const BitFieldDescription &bfd);
	QString operator()(const QString &text) const;

private:
	std::vector<QString> valueNames;
};

}

#endif
