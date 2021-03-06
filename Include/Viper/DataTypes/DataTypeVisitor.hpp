#ifndef VIPER_DATA_TYPE_VISITOR_HPP
#define VIPER_DATA_TYPE_VISITOR_HPP

namespace Viper {
  class BlobDataType;
  class DataType;
  class DateTimeDataType;
  class FloatDataType;
  class IntegerDataType;
  class TextDataType;
  class VarCharDataType;

  //! Implements the visitor pattern for SQL data types.
  class DataTypeVisitor {
    public:
      virtual ~DataTypeVisitor() = default;

      virtual void visit(const BlobDataType& type);

      virtual void visit(const DataType& type);

      virtual void visit(const DateTimeDataType& type);

      virtual void visit(const FloatDataType& type);

      virtual void visit(const IntegerDataType& type);

      virtual void visit(const TextDataType& type);

      virtual void visit(const VarCharDataType& type);

    protected:

      //! Constructs an SQL data type visitor.
      DataTypeVisitor() = default;
  };

  inline void DataTypeVisitor::visit(const DataType& type) {}
}

#endif
