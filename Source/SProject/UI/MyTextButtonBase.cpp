// Copyright (c) 2025 cannot206.

#include "MyTextButtonBase.h"

#if WITH_EDITOR
const FText UMyTextButtonBase::GetPaletteCategory()
{
    return FText::FromString(TEXT("My UI"));
}
#endif
