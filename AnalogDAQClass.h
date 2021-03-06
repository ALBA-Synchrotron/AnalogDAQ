//=============================================================================
//
// file :         AnalogDAQClass.h
//
// description :  Include for the AnalogDAQClass root class.
//                This class is represents the singleton class for
//                the AnalogDAQ device class.
//                It contains all properties and methods which the 
//                AnalogDAQ requires only once e.g. the commands.
//			
// project :      TANGO Device Server
//
// $Author: rsune $
//
// $Revision: 6892 $
//
// $Log$
// Revision 1.4  2007/02/13 12:11:26  srubio
// *** empty log message ***
//
// Revision 1.3  2007/02/13 11:49:24  srubio
// Added Modifications required by Dynamic Attributes specification
//
// Revision 1.2  2007/01/17 14:20:47  srubio
// New attributes, properties and commands
//
// Revision 1.1.1.1  2006/11/22 08:54:24  srubio
// First POGO Release of the Analog I/O Abstract Class
//
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================

#ifndef _ANALOGDAQCLASS_H
#define _ANALOGDAQCLASS_H

#include <tango.h>
#include <AnalogDAQ.h>


namespace AnalogDAQ_ns
{
//=====================================
//	Define classes for attributes
//=====================================
class ChannelSpectrumAttrib: public Tango::SpectrumAttr
{
public:
	ChannelSpectrumAttrib():SpectrumAttr("ChannelSpectrum", Tango::DEV_DOUBLE, Tango::READ_WRITE, 10000000) {};
	~ChannelSpectrumAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_ChannelSpectrum(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_ChannelSpectrum(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_ChannelSpectrum_allowed(ty);}
};

class ScalarValueAttrib: public Tango::Attr
{
public:
	ScalarValueAttrib():Attr("ScalarValue", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~ScalarValueAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_ScalarValue(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_ScalarValue(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_ScalarValue_allowed(ty);}
};

class FileNameAttrib: public Tango::Attr
{
public:
	FileNameAttrib():Attr("FileName", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~FileNameAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_FileName(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_FileName(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_FileName_allowed(ty);}
};

class DoubleDATAAttrib: public Tango::ImageAttr
{
public:
	DoubleDATAAttrib():ImageAttr("DoubleDATA", Tango::DEV_DOUBLE, Tango::READ_WRITE, 10000000, 256) {};
	~DoubleDATAAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_DoubleDATA(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_DoubleDATA(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_DoubleDATA_allowed(ty);}
};

class RawDATAAttrib: public Tango::ImageAttr
{
public:
	RawDATAAttrib():ImageAttr("RawDATA", Tango::DEV_LONG, Tango::READ_WRITE, 10000000, 256) {};
	~RawDATAAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_RawDATA(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_RawDATA(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_RawDATA_allowed(ty);}
};

class BufferedChannelsListAttrib: public Tango::SpectrumAttr
{
public:
	BufferedChannelsListAttrib():SpectrumAttr("BufferedChannelsList", Tango::DEV_STRING, Tango::READ_WRITE, 256) {};
	~BufferedChannelsListAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_BufferedChannelsList(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_BufferedChannelsList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_BufferedChannelsList_allowed(ty);}
};

class BufferPeriodAttrib: public Tango::Attr
{
public:
	BufferPeriodAttrib():Attr("BufferPeriod", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~BufferPeriodAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_BufferPeriod(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_BufferPeriod(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_BufferPeriod_allowed(ty);}
};

class TriggerModeAttrib: public Tango::Attr
{
public:
	TriggerModeAttrib():Attr("TriggerMode", Tango::DEV_USHORT, Tango::READ_WRITE) {};
	~TriggerModeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_TriggerMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_TriggerMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_TriggerMode_allowed(ty);}
};

class TriggerSourcesAttrib: public Tango::Attr
{
public:
	TriggerSourcesAttrib():Attr("TriggerSources", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~TriggerSourcesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_TriggerSources(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_TriggerSources(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_TriggerSources_allowed(ty);}
};

class MinRefSourceAttrib: public Tango::Attr
{
public:
	MinRefSourceAttrib():Attr("MinRefSource", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~MinRefSourceAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_MinRefSource(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_MinRefSource(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_MinRefSource_allowed(ty);}
};

class MaxRefSourceAttrib: public Tango::Attr
{
public:
	MaxRefSourceAttrib():Attr("MaxRefSource", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~MaxRefSourceAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_MaxRefSource(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_MaxRefSource(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_MaxRefSource_allowed(ty);}
};

class NumOfTriggersAttrib: public Tango::Attr
{
public:
	NumOfTriggersAttrib():Attr("NumOfTriggers", Tango::DEV_LONG, Tango::READ_WRITE) {};
	~NumOfTriggersAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_NumOfTriggers(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_NumOfTriggers(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_NumOfTriggers_allowed(ty);}
};

class ChannelSamplesPerTriggerAttrib: public Tango::Attr
{
public:
	ChannelSamplesPerTriggerAttrib():Attr("ChannelSamplesPerTrigger", Tango::DEV_LONG, Tango::READ_WRITE) {};
	~ChannelSamplesPerTriggerAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_ChannelSamplesPerTrigger(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_ChannelSamplesPerTrigger(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_ChannelSamplesPerTrigger_allowed(ty);}
};

class SampleRateAttrib: public Tango::Attr
{
public:
	SampleRateAttrib():Attr("SampleRate", Tango::DEV_LONG, Tango::READ_WRITE) {};
	~SampleRateAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<AnalogDAQ *>(dev))->read_SampleRate(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<AnalogDAQ *>(dev))->write_SampleRate(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<AnalogDAQ *>(dev))->is_SampleRate_allowed(ty);}
};

//=========================================
//	Define classes for commands
//=========================================
class ExportFileCmd : public Tango::Command
{
public:
	ExportFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ExportFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ExportFileCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<AnalogDAQ *>(dev))->is_ExportFile_allowed(any);}
};



class ImportFileCmd : public Tango::Command
{
public:
	ImportFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ImportFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ImportFileCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<AnalogDAQ *>(dev))->is_ImportFile_allowed(any);}
};



class StopClass : public Tango::Command
{
public:
	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StopClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StopClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<AnalogDAQ *>(dev))->is_Stop_allowed(any);}
};



class StartClass : public Tango::Command
{
public:
	StartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<AnalogDAQ *>(dev))->is_Start_allowed(any);}
};



//
// The AnalogDAQClass singleton definition
//

class AnalogDAQClass : public Tango::DeviceClass
{
public:
//	properties member data

//	add your own data members here
//------------------------------------

public:

protected:
	AnalogDAQClass(string &);
	void command_factory();
	void get_class_property();
	void attribute_factory(vector<Tango::Attr *> &);

private:
};


}	//	namespace AnalogDAQ_ns

#endif // _ANALOGDAQCLASS_H
