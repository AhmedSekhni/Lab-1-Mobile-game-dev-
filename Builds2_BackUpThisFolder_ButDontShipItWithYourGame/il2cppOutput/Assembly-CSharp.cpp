#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};

struct Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
struct Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
struct TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct MobileBootstrap_t93959D6FDA99E3814C6A7687F2E346B98F0EF8C3;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct String_t;
struct TapSwipeInput_tCB01214409853CD9C8054837BECE832DA3F71B81;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral163EC511CD66D158C78963403CB7F92476173855;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E34535E5989C73997F05ADD52865EE12A07CBE;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9A45E8C925C87EA4F8D9A4454F48055A04249688_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 
{
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD 
{
	int32_t ___length;
	Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___firstValue;
	Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16* ___additionalValues;
};
struct InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 
{
	int32_t ___length;
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___firstValue;
	TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3* ___additionalValues;
};
struct ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72 
{
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_Callbacks;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToAdd;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToRemove;
};
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct TouchPhase_tC280DE0C3DA3652019BF3605D57099E6CE2F3B14 
{
	int32_t ___value__;
};
struct UpdateMode_tCD49766B755C4CD8E1F2DE8D57798DAC2C5CBF32 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D 
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	bool ___haveBuiltActiveTouches;
	bool ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	int32_t ___haveBuiltActiveTouches;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	int32_t ___haveBuiltActiveTouches;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A 
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D ___playerState;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_pinvoke
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke ___playerState;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_com
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com ___playerState;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct MobileBootstrap_t93959D6FDA99E3814C6A7687F2E346B98F0EF8C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct TapSwipeInput_tCB01214409853CD9C8054837BECE832DA3F71B81  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ___swipeDp;
	float ___tapMax;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticFields
{
	GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A ___s_GlobalState;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 Enumerator_get_Current_m9A45E8C925C87EA4F8D9A4454F48055A04249688 (Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedTouchSupport_Enable_mD8F0AC9B4B4DDBCA5EA779F35A5C28394D3FF6CE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnhancedTouchSupport_Disable_m11AAE1A6CE5F340154C0EB0D95FBC168B01F8B48 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72 Touch_get_activeTouches_m10CB2BE5EC26DB9CF742196282FCF10C090AAD11 (const RuntimeMethod* method) ;
inline Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 (*) (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
inline void Enumerator_Dispose_m5AEE7816CF0CCC6427AFBADCEA8D6A8AD7FED67C (Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34*, const RuntimeMethod*))Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 Enumerator_get_Current_m9A45E8C925C87EA4F8D9A4454F48055A04249688 (Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m8269B0C7F19A3A0E187DADBAEC88D51D39C12939 (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_screenPosition_mAEBB428F1E62308A2C3E32A56CBEFCA9F7530B03 (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_startScreenPosition_mAF62C4C8C812B9E36855A6CB63B8493F8ED3E0C7 (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Touch_get_time_m1E3EA9FB3DF10246B7BBF100663BAA3030714F17 (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Touch_get_startTime_m9778C4C818DD69BAC47D10B7567233E5316264CB (Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m82F3D32E3AA31DB80C5890560488F0A74E47196D (Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34*, const RuntimeMethod*))Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Normalize_m52526AC1D25ED668DF8A5DE540769FA7D5671FC7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mC10F098442E56919947154402A77EDE28DC9B7BE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 55835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileBootstrap_Start_mEB09EE9DE42A17CD6BB241C8E1F00845E41F662E (MobileBootstrap_t93959D6FDA99E3814C6A7687F2E346B98F0EF8C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9E34535E5989C73997F05ADD52865EE12A07CBE);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC9E34535E5989C73997F05ADD52865EE12A07CBE, NULL);
		return;
	}
}
// Method Definition Index: 55836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileBootstrap__ctor_m3F09C52368920C0493D768FCDA2FA1B9F260812C (MobileBootstrap_t93959D6FDA99E3814C6A7687F2E346B98F0EF8C3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 55837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSwipeInput_OnEnable_m03AC1188608DC00379E94A8E2BC6790F95A2FDA8 (TapSwipeInput_tCB01214409853CD9C8054837BECE832DA3F71B81* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EnhancedTouchSupport_Enable_mD8F0AC9B4B4DDBCA5EA779F35A5C28394D3FF6CE(NULL);
		return;
	}
}
// Method Definition Index: 55838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSwipeInput_OnDisable_m879C833B4E84B8DCB2441D8FBAE8A631269B396A (TapSwipeInput_tCB01214409853CD9C8054837BECE832DA3F71B81* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EnhancedTouchSupport_Disable_m11AAE1A6CE5F340154C0EB0D95FBC168B01F8B48(NULL);
		return;
	}
}
// Method Definition Index: 55839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSwipeInput_Update_m78D0A4119E5876171B8DF8A04F692AC26D772606 (TapSwipeInput_tCB01214409853CD9C8054837BECE832DA3F71B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9A45E8C925C87EA4F8D9A4454F48055A04249688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163EC511CD66D158C78963403CB7F92476173855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		CHECKED_LOCAL_INIT(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticInit,(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72 L_0;
		L_0 = Touch_get_activeTouches_m10CB2BE5EC26DB9CF742196282FCF10C090AAD11(NULL);
		V_1 = L_0;
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_1;
		L_1 = ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{
				Enumerator_Dispose_m5AEE7816CF0CCC6427AFBADCEA8D6A8AD7FED67C((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0013_1:
			{
				Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_2;
				L_2 = Enumerator_get_Current_m9A45E8C925C87EA4F8D9A4454F48055A04249688((&V_0), Enumerator_get_Current_m9A45E8C925C87EA4F8D9A4454F48055A04249688_RuntimeMethod_var);
				V_2 = L_2;
				CHECKED_LOCAL_INIT(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticInit,(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_3;
				L_3 = Touch_get_phase_m8269B0C7F19A3A0E187DADBAEC88D51D39C12939((&V_2), NULL);
				if ((!(((uint32_t)L_3) == ((uint32_t)3))))
				{
					goto IL_00ad_1;
				}
			}
			{
				float L_4 = __this->___swipeDp;
				float L_5;
				L_5 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
				float L_6;
				L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_5, (160.0f), NULL);
				V_3 = ((float)(((float)il2cpp_codegen_multiply(L_4, L_6))/(160.0f)));
				CHECKED_LOCAL_INIT(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticInit,(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
				L_7 = Touch_get_screenPosition_mAEBB428F1E62308A2C3E32A56CBEFCA9F7530B03((&V_2), NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
				L_8 = Touch_get_startScreenPosition_mAF62C4C8C812B9E36855A6CB63B8493F8ED3E0C7((&V_2), NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
				L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_7, L_8, NULL);
				V_4 = L_9;
				float L_10;
				L_10 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_4), NULL);
				float L_11 = V_3;
				if ((!(((float)L_10) >= ((float)L_11))))
				{
					goto IL_008b_1;
				}
			}
			{
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
				L_12 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_4), NULL);
				V_5 = L_12;
				String_t* L_13;
				L_13 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27_inline((&V_5), NULL);
				String_t* L_14;
				L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral163EC511CD66D158C78963403CB7F92476173855, L_13, NULL);
				CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
				goto IL_00ad_1;
			}

IL_008b_1:
			{
				CHECKED_LOCAL_INIT(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticInit,(Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				double L_15;
				L_15 = Touch_get_time_m1E3EA9FB3DF10246B7BBF100663BAA3030714F17((&V_2), NULL);
				double L_16;
				L_16 = Touch_get_startTime_m9778C4C818DD69BAC47D10B7567233E5316264CB((&V_2), NULL);
				float L_17 = __this->___tapMax;
				double L_18 = (il2cpp_codegen_conv<double,float,float,false,false>(L_17,NULL));
				if ((!(((double)((double)il2cpp_codegen_subtract(L_15, L_16))) < ((double)L_18))))
				{
					goto IL_00ad_1;
				}
			}
			{
				CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral84C8BF6DDBDDEC3A92AEA77ABF46CD671944B758, NULL);
			}

IL_00ad_1:
			{
				bool L_19;
				L_19 = Enumerator_MoveNext_m82F3D32E3AA31DB80C5890560488F0A74E47196D((&V_0), NULL);
				if (L_19)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_00c9;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		return;
	}
}
// Method Definition Index: 55840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapSwipeInput__ctor_m55723575A47CF373DEA44ECDA17DA52EDF220630 (TapSwipeInput_tCB01214409853CD9C8054837BECE832DA3F71B81* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___swipeDp = (50.0f);
		__this->___tapMax = (0.300000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 33936
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		float L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		float L_3 = ___0_a;
		return L_3;
	}
}
// Method Definition Index: 33986
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 33980
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		double L_4 = (il2cpp_codegen_conv<double,float,float,false,false>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))),NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_5;
		L_5 = sqrt(L_4);
		float L_6 = (il2cpp_codegen_conv<float,double,double,false,false>(L_5,NULL));
		return L_6;
	}
}
// Method Definition Index: 33972
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_Normalize_m52526AC1D25ED668DF8A5DE540769FA7D5671FC7(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 33973
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		String_t* L_0;
		L_0 = Vector2_ToString_mC10F098442E56919947154402A77EDE28DC9B7BE_inline(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
// Method Definition Index: 33974
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mC10F098442E56919947154402A77EDE28DC9B7BE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		___0_format = _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ___1_formatProvider;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		CHECKED_LOCAL_INIT(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticInit,(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_3);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_4;
		L_4 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14, L_3);
		___1_formatProvider = L_4;
	}

IL_001e:
	{
		float* L_5 = (float*)(&__this->___x);
		String_t* L_6 = ___0_format;
		RuntimeObject* L_7 = ___1_formatProvider;
		String_t* L_8;
		L_8 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_5, L_6, L_7, NULL);
		float* L_9 = (float*)(&__this->___y);
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_formatProvider;
		String_t* L_12;
		L_12 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_9, L_10, L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_8, L_12, NULL);
		return L_13;
	}
}
