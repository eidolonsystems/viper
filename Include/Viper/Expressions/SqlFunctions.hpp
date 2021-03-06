#ifndef VIPER_SQL_FUNCTIONS_HPP
#define VIPER_SQL_FUNCTIONS_HPP
#include <optional>
#include <string>
#include "Viper/Row.hpp"

namespace Viper {

  //! Returns the maximum value within a column.
  /*!
    \param column The name of the column.
  */
  template<typename T>
  Row<std::optional<T>> max(std::string column) {
    return Row<std::optional<T>>().add_column("MAX(" + column + ")");
  }

  //! Returns the minimum value within a column.
  /*!
    \param column The name of the column.
  */
  template<typename T>
  Row<std::optional<T>> min(std::string column) {
    return Row<std::optional<T>>().add_column("MIN(" + column + ")");
  }

  //! Returns the number of columns matching a query.
  /*!
    \param column The name of the column.
  */
  inline Row<int> count(std::string column) {
    return Row<int>().add_column("COUNT(" + column + ")");
  }
}

#endif
