// Georgy Treshchev 2022.

#pragma once

#include "CoreMinimal.h"

struct FDecodedAudioStruct;
struct FEncodedAudioStruct;


class RUNTIMEAUDIOIMPORTER_API FLACTranscoder
{
public:
	/*static bool Encode(FDecodedAudioStruct DecodedData, FEncodedAudioStruct& EncodedData);*/
	static bool Decode(FEncodedAudioStruct EncodedData, FDecodedAudioStruct& DecodedData);
};