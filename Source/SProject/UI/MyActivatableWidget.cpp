// Copyright (c) 2025 cannot206.

#include "MyActivatableWidget.h"

#if WITH_EDITOR
const FText UMyActivatableWidget::GetPaletteCategory()
{
    return FText::FromString(TEXT("My UI"));
}
#endif
 