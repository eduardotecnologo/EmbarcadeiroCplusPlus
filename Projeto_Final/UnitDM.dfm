object DM: TDM
  OldCreateOrder = False
  Height = 318
  Width = 530
  object ConnDB: TFDConnection
    Params.Strings = (
      
        'Database=C:\Users\E\OneDrive\Documentos\GIT\EmbarcadeiroCplusPlu' +
        's\Projeto_Final\DB\PROJETO_FINAL.FDB'
      'User_Name=SYSDBA'
      'Password=masterkey'
      'Server=localhost'
      'CharacterSet=WIN1252'
      'DriverID=FB')
    Connected = True
    LoginPrompt = False
    Left = 360
    Top = 16
  end
  object FDPhysFBDriverLink1: TFDPhysFBDriverLink
    VendorLib = 'E:\DB\Firebird_2_5\WOW64\fbclient.dll'
    Left = 456
    Top = 16
  end
  object FDQueryExibir: TFDQuery
    Connection = ConnDB
    SQL.Strings = (
      'select * from cliente')
    Left = 40
    Top = 24
  end
  object DSExibir: TDataSource
    DataSet = FDQueryExibir
    Left = 128
    Top = 24
  end
  object FDQueryIncluir: TFDQuery
    Connection = ConnDB
    SQL.Strings = (
      'insert into cliente(id,nome,endereco,cidade,estado)'
      'values(gen_id(id_cliente,1),:nome,:endereco,:cidade,:estado)')
    Left = 40
    Top = 88
    ParamData = <
      item
        Name = 'NOME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ENDERECO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CIDADE'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ESTADO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end>
  end
  object DSIncluir: TDataSource
    DataSet = FDQueryIncluir
    Left = 128
    Top = 88
  end
  object FDQueryAlterar: TFDQuery
    Connection = ConnDB
    SQL.Strings = (
      
        'UPDATE CLIENTE SET NOME=:NOME,ENDERECO=:ENDERECO,CIDADE=:CIDADE,' +
        'ESTADO=:ESTADO'
      'WHERE ID=:ID')
    Left = 40
    Top = 160
    ParamData = <
      item
        Name = 'NOME'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ENDERECO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CIDADE'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ESTADO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object FDQueryExcluir: TFDQuery
    Connection = ConnDB
    SQL.Strings = (
      'delete from cliente where id=:id')
    Left = 32
    Top = 232
    ParamData = <
      item
        Name = 'ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object DSAlterar: TDataSource
    DataSet = FDQueryAlterar
    Left = 120
    Top = 168
  end
  object DSExcluir: TDataSource
    DataSet = FDQueryExcluir
    Left = 120
    Top = 232
  end
end
