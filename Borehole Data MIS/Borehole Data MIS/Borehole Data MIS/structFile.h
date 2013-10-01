#pragma once
/*���ļ���Ҫ���������ڱ����ά����㡢������͡������Ϣ���ز�������Ϣ�͵ز���Ϣ�Ľṹ*/
#ifndef BOREHOLE_H
#define BOREHOLE_H
#include <string>
using namespace std;

struct _POINT2D
{
	double m_x;
	double m_y;
};

struct _BOREHOLEINFO
{
	string m_holeCode;//��ױ��
	string m_holeName;//�������
	string m_holeType;//�������
	string m_holeTypeName;//���������
	string m_dateStart;//��������
	string m_dateEnd;//�깤����
	string m_Engineer;//�ֳ�����ʦ
	string m_mark;//��ע
	double m_waterLevel;//����ˮλ
	double m_holeDiameter;//�׾�
	double m_holeDep;//������
	double m_holeEle;//�׿ڸ߳�
	_POINT2D m_pt;//��γ������
};

struct _HOLESTRATAINFO
{
	string m_holeCode;//��ױ��
	string m_holeName;//�������
	string m_straCode;//�ز���
	string m_straColor;//�ز���ɫ
	string m_straName;//�ز�����
	string m_age;//�ز����
	string m_genesis;//���ʳ���
	double m_eleTop;//�㶥���
	float m_layerBottomDep;//�������
	float m_layerTopDep;//�㶥����
	//int m_rcdNo;//�����¼��
	int m_layerNo;//�ز����
};
#endif