// Copyright (c) 2025 cannot206.

#include "MyButtonBase.h"

#if WITH_EDITOR
const FText UMyButtonBase::GetPaletteCategory()
{
    return FText::FromString(TEXT("My UI"));
}
#endif
