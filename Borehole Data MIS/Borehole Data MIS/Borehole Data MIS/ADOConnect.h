
#pragma once
#ifndef ADOCONNECT_H
#define ADOCONNECT_H
#import "C:\Program Files\Common Files\System\ado\msado15.dll" \
	no_namespace rename("EOF","adoEOF") rename("BOF","adoBOF")

class ADOConnect
{
public:
	ADOConnect(void);
	~ADOConnect(void);
public:
	//����
	bool OnitConnect();               //�����������ݿ�
	_RecordsetPtr &GetRecordSet(_bstr_t bstrSQL);           //���ڴ򿪼�¼��
	BOOL ExecuteSQL(_bstr_t bstrSQL);                       //ִ��SQL��䣬�������ݿ�
	void ExitConnect();                                     //�Ͽ����ݿ����Ӻ͹رռ�¼��
public:
	_ConnectionPtr m_pConnection; //���Ӷ���
	_RecordsetPtr  m_pRecordset;  //��¼������
	_bstr_t bstrSQL;
};
#endif