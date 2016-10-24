/**
 * Copyright (c) 2011-2015 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <bitcoin/bitcoin/chain/script/evaluation_context.hpp>

#include <bitcoin/bitcoin/utility/data.hpp>

namespace libbitcoin {
namespace chain {

evaluation_context::evaluation_context(uint32_t flags)
  : flags(flags)
{
}

evaluation_context::evaluation_context(uint32_t flags, const data_stack& stack)
  : flags(flags), stack(stack)
{
}

data_chunk evaluation_context::pop_stack()
{
    const auto value = stack.back();
    stack.pop_back();
    return value;
}

} // namespace chain
} // namespace libbitcoin
