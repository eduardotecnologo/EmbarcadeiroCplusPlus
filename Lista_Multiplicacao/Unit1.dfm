object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Tabela de Multiplica'#231#227'o'
  ClientHeight = 365
  ClientWidth = 512
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 64
    Top = 8
    Width = 172
    Height = 19
    Caption = 'Tabela de Multiplicar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 360
    Top = 40
    Width = 70
    Height = 19
    Caption = 'N'#250'mero:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ListBoxResult: TListBox
    Left = 8
    Top = 44
    Width = 281
    Height = 313
    ItemHeight = 13
    TabOrder = 0
  end
  object BtnCalcular: TButton
    Left = 312
    Top = 120
    Width = 177
    Height = 41
    Caption = 'Calcular'
    TabOrder = 1
    OnClick = BtnCalcularClick
  end
  object BtnLimpar: TButton
    Left = 312
    Top = 192
    Width = 177
    Height = 41
    Caption = 'Limpar'
    TabOrder = 2
    OnClick = BtnLimparClick
  end
  object BtnSair: TButton
    Left = 312
    Top = 264
    Width = 177
    Height = 41
    Caption = 'Sair'
    TabOrder = 3
    OnClick = BtnSairClick
  end
  object EditNumero: TEdit
    Left = 312
    Top = 68
    Width = 177
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
end
