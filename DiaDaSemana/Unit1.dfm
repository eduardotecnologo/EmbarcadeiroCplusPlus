object Form1: TForm1
  Left = 700
  Top = 457
  Caption = 'Dia da Semana'
  ClientHeight = 235
  ClientWidth = 539
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 120
    Top = 3
    Width = 150
    Height = 23
    Caption = 'N'#250'mero do Dia:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 120
    Top = 71
    Width = 148
    Height = 23
    Caption = 'Dia da Semana:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object BtnVerificar: TBitBtn
    Left = 120
    Top = 160
    Width = 129
    Height = 41
    Caption = 'Verificar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = BtnVerificarClick
  end
  object BtnSair: TBitBtn
    Left = 280
    Top = 160
    Width = 129
    Height = 41
    Caption = 'Sair'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = BtnSairClick
  end
  object EditNumDia: TEdit
    Left = 120
    Top = 32
    Width = 289
    Height = 31
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object EditDiaSemana: TEdit
    Left = 120
    Top = 104
    Width = 289
    Height = 31
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
end
