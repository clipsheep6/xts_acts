/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import attrsManager from '../../common/AttrsManager'
import router from '@ohos.router'

class AlphabetIndexerModifier implements AttributeModifier<AlphabetIndexerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: AlphabetIndexerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class BadgeModifier implements AttributeModifier<BadgeAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: BadgeAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ButtonModifier implements AttributeModifier<ButtonAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ButtonAttribute): void {
		instance.outline(this.mOutline)
	}
}

class BlankModifier implements AttributeModifier<BlankAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: BlankAttribute): void {
		instance.outline(this.mOutline)
	}
}

class CalendarPickerModifier implements AttributeModifier<CalendarPickerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: CalendarPickerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class CanvasModifier implements AttributeModifier<CanvasAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: CanvasAttribute): void {
		instance.outline(this.mOutline)
	}
}

class CheckboxModifier implements AttributeModifier<CheckboxAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: CheckboxAttribute): void {
		instance.outline(this.mOutline)
	}
}

class CheckboxGroupModifier implements AttributeModifier<CheckboxGroupAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: CheckboxGroupAttribute): void {
		instance.outline(this.mOutline)
	}
}

class CircleModifier implements AttributeModifier<CircleAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: CircleAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ColumnModifier implements AttributeModifier<ColumnAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ColumnAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ColumnSplitModifier implements AttributeModifier<ColumnSplitAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ColumnSplitAttribute): void {
		instance.outline(this.mOutline)
	}
}

class CounterModifier implements AttributeModifier<CounterAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: CounterAttribute): void {
		instance.outline(this.mOutline)
	}
}

class DataPanelModifier implements AttributeModifier<DataPanelAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: DataPanelAttribute): void {
		instance.outline(this.mOutline)
	}
}

class DatePickerModifier implements AttributeModifier<DatePickerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: DatePickerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class DividerModifier implements AttributeModifier<DividerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: DividerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class EllipseModifier implements AttributeModifier<EllipseAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: EllipseAttribute): void {
		instance.outline(this.mOutline)
	}
}

class FlexModifier implements AttributeModifier<FlexAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: FlexAttribute): void {
		instance.outline(this.mOutline)
	}
}

class FlowItemModifier implements AttributeModifier<FlowItemAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: FlowItemAttribute): void {
		instance.outline(this.mOutline)
	}
}

class FormLinkModifier implements AttributeModifier<FormLinkAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: FormLinkAttribute): void {
		instance.outline(this.mOutline)
	}
}

class GaugeModifier implements AttributeModifier<GaugeAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: GaugeAttribute): void {
		instance.outline(this.mOutline)
	}
}

class GridModifier implements AttributeModifier<GridAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: GridAttribute): void {
		instance.outline(this.mOutline)
	}
}

class GridColModifier implements AttributeModifier<GridColAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: GridColAttribute): void {
		instance.outline(this.mOutline)
	}
}

class GridItemModifier implements AttributeModifier<GridItemAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: GridItemAttribute): void {
		instance.outline(this.mOutline)
	}
}

class GridRowModifier implements AttributeModifier<GridRowAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: GridRowAttribute): void {
		instance.outline(this.mOutline)
	}
}

class HyperlinkModifier implements AttributeModifier<HyperlinkAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: HyperlinkAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ImageModifier implements AttributeModifier<ImageAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ImageAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ImageAnimatorModifier implements AttributeModifier<ImageAnimatorAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ImageAnimatorAttribute): void {
		instance.outline(this.mOutline)
	}
}

class LineModifier implements AttributeModifier<LineAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: LineAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ListModifier implements AttributeModifier<ListAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ListAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ListItemModifier implements AttributeModifier<ListItemAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ListItemAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ListItemGroupModifier implements AttributeModifier<ListItemGroupAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ListItemGroupAttribute): void {
		instance.outline(this.mOutline)
	}
}

class LoadingProgressModifier implements AttributeModifier<LoadingProgressAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: LoadingProgressAttribute): void {
		instance.outline(this.mOutline)
	}
}

class MarqueeModifier implements AttributeModifier<MarqueeAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: MarqueeAttribute): void {
		instance.outline(this.mOutline)
	}
}

class MenuModifier implements AttributeModifier<MenuAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: MenuAttribute): void {
		instance.outline(this.mOutline)
	}
}

class MenuItemModifier implements AttributeModifier<MenuItemAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: MenuItemAttribute): void {
		instance.outline(this.mOutline)
	}
}

class MenuItemGroupModifier implements AttributeModifier<MenuItemGroupAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: MenuItemGroupAttribute): void {
		instance.outline(this.mOutline)
	}
}

class NavDestinationModifier implements AttributeModifier<NavDestinationAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: NavDestinationAttribute): void {
		instance.outline(this.mOutline)
	}
}

class NavigationModifier implements AttributeModifier<NavigationAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: NavigationAttribute): void {
		instance.outline(this.mOutline)
	}
}

class NavigatorModifier implements AttributeModifier<NavigatorAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: NavigatorAttribute): void {
		instance.outline(this.mOutline)
	}
}

class NavRouterModifier implements AttributeModifier<NavRouterAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: NavRouterAttribute): void {
		instance.outline(this.mOutline)
	}
}

class PanelModifier implements AttributeModifier<PanelAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: PanelAttribute): void {
		instance.outline(this.mOutline)
	}
}

class PathModifier implements AttributeModifier<PathAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: PathAttribute): void {
		instance.outline(this.mOutline)
	}
}

class PolygonModifier implements AttributeModifier<PolygonAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: PolygonAttribute): void {
		instance.outline(this.mOutline)
	}
}

class PolylineModifier implements AttributeModifier<PolylineAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: PolylineAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ProgressModifier implements AttributeModifier<ProgressAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ProgressAttribute): void {
		instance.outline(this.mOutline)
	}
}

class QRCodeModifier implements AttributeModifier<QRCodeAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: QRCodeAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RadioModifier implements AttributeModifier<RadioAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RadioAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RatingModifier implements AttributeModifier<RatingAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RatingAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RectModifier implements AttributeModifier<RectAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RectAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RefreshModifier implements AttributeModifier<RefreshAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RefreshAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RelativeContainerModifier implements AttributeModifier<RelativeContainerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RelativeContainerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RemoteWindowModifier implements AttributeModifier<RemoteWindowAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RemoteWindowAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RichEditorModifier implements AttributeModifier<RichEditorAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RichEditorAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RichTextModifier implements AttributeModifier<RichTextAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RichTextAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RowModifier implements AttributeModifier<RowAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RowAttribute): void {
		instance.outline(this.mOutline)
	}
}

class RowSplitModifier implements AttributeModifier<RowSplitAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: RowSplitAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ScrollModifier implements AttributeModifier<ScrollAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ScrollAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ScrollBarModifier implements AttributeModifier<ScrollBarAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ScrollBarAttribute): void {
		instance.outline(this.mOutline)
	}
}

class SearchModifier implements AttributeModifier<SearchAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: SearchAttribute): void {
		instance.outline(this.mOutline)
	}
}

class SelectModifier implements AttributeModifier<SelectAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: SelectAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ShapeModifier implements AttributeModifier<ShapeAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ShapeAttribute): void {
		instance.outline(this.mOutline)
	}
}

class SideBarContainerModifier implements AttributeModifier<SideBarContainerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: SideBarContainerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class SliderModifier implements AttributeModifier<SliderAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: SliderAttribute): void {
		instance.outline(this.mOutline)
	}
}

class SpanModifier implements AttributeModifier<SpanAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: SpanAttribute): void {
		instance.outline(this.mOutline)
	}
}

class StackModifier implements AttributeModifier<StackAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: StackAttribute): void {
		instance.outline(this.mOutline)
	}
}

class StepperModifier implements AttributeModifier<StepperAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: StepperAttribute): void {
		instance.outline(this.mOutline)
	}
}

class StepperItemModifier implements AttributeModifier<StepperItemAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: StepperItemAttribute): void {
		instance.outline(this.mOutline)
	}
}

class SwiperModifier implements AttributeModifier<SwiperAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: SwiperAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TabContentModifier implements AttributeModifier<TabContentAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TabContentAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TabsModifier implements AttributeModifier<TabsAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TabsAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TextModifier implements AttributeModifier<TextAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TextAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TextAreaModifier implements AttributeModifier<TextAreaAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TextAreaAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TextClockModifier implements AttributeModifier<TextClockAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TextClockAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TextInputModifier implements AttributeModifier<TextInputAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TextInputAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TextPickerModifier implements AttributeModifier<TextPickerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TextPickerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TextTimerModifier implements AttributeModifier<TextTimerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TextTimerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class TimePickerModifier implements AttributeModifier<TimePickerAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: TimePickerAttribute): void {
		instance.outline(this.mOutline)
	}
}

class ToggleModifier implements AttributeModifier<ToggleAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: ToggleAttribute): void {
		instance.outline(this.mOutline)
	}
}

class VideoModifier implements AttributeModifier<VideoAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: VideoAttribute): void {
		instance.outline(this.mOutline)
	}
}

class WaterFlowModifier implements AttributeModifier<WaterFlowAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: WaterFlowAttribute): void {
		instance.outline(this.mOutline)
	}
}

class WebModifier implements AttributeModifier<WebAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: WebAttribute): void {
		instance.outline(this.mOutline)
	}
}

class WindowSceneModifier implements AttributeModifier<WindowSceneAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: WindowSceneAttribute): void {
		instance.outline(this.mOutline)
	}
}

class XComponentModifier implements AttributeModifier<XComponentAttribute> {
	mOutline: OutlineOptions = { width: { top: 2, right: '10px', bottom: 10, left: 10 }, color: Color.Red }

	applyNormalAttribute(instance: XComponentAttribute): void {
		instance.outline(this.mOutline)
	}
}

@Entry
@Component
struct OutlinePage {
	@State _outlineAlphabetIndexerModifier: AlphabetIndexerModifier = new AlphabetIndexerModifier()
	@State _outlineBadgeModifier: BadgeModifier = new BadgeModifier()
	@State _outlineButtonModifier: ButtonModifier = new ButtonModifier()
	@State _outlineBlankModifier: BlankModifier = new BlankModifier()
	@State _outlineCalendarPickerModifier: CalendarPickerModifier = new CalendarPickerModifier()
	@State _outlineCanvasModifier: CanvasModifier = new CanvasModifier()
	@State _outlineCheckboxModifier: CheckboxModifier = new CheckboxModifier()
	@State _outlineCheckboxGroupModifier: CheckboxGroupModifier = new CheckboxGroupModifier()
	@State _outlineCircleModifier: CircleModifier = new CircleModifier()
	@State _outlineColumnModifier: ColumnModifier = new ColumnModifier()
	@State _outlineColumnSplitModifier: ColumnSplitModifier = new ColumnSplitModifier()
	@State _outlineCounterModifier: CounterModifier = new CounterModifier()
	@State _outlineDataPanelModifier: DataPanelModifier = new DataPanelModifier()
	@State _outlineDatePickerModifier: DatePickerModifier = new DatePickerModifier()
	@State _outlineDividerModifier: DividerModifier = new DividerModifier()
	@State _outlineEllipseModifier: EllipseModifier = new EllipseModifier()
	@State _outlineFlexModifier: FlexModifier = new FlexModifier()
	@State _outlineFlowItemModifier: FlowItemModifier = new FlowItemModifier()
	@State _outlineFormLinkModifier: FormLinkModifier = new FormLinkModifier()
	@State _outlineGaugeModifier: GaugeModifier = new GaugeModifier()
	@State _outlineGridModifier: GridModifier = new GridModifier()
	@State _outlineGridColModifier: GridColModifier = new GridColModifier()
	@State _outlineGridItemModifier: GridItemModifier = new GridItemModifier()
	@State _outlineGridRowModifier: GridRowModifier = new GridRowModifier()
	@State _outlineHyperlinkModifier: HyperlinkModifier = new HyperlinkModifier()
	@State _outlineImageModifier: ImageModifier = new ImageModifier()
	@State _outlineImageAnimatorModifier: ImageAnimatorModifier = new ImageAnimatorModifier()
	@State _outlineLineModifier: LineModifier = new LineModifier()
	@State _outlineListModifier: ListModifier = new ListModifier()
	@State _outlineListItemModifier: ListItemModifier = new ListItemModifier()
	@State _outlineListItemGroupModifier: ListItemGroupModifier = new ListItemGroupModifier()
	@State _outlineLoadingProgressModifier: LoadingProgressModifier = new LoadingProgressModifier()
	@State _outlineMarqueeModifier: MarqueeModifier = new MarqueeModifier()
	@State _outlineMenuModifier: MenuModifier = new MenuModifier()
	@State _outlineMenuItemModifier: MenuItemModifier = new MenuItemModifier()
	@State _outlineMenuItemGroupModifier: MenuItemGroupModifier = new MenuItemGroupModifier()
	@State _outlineNavDestinationModifier: NavDestinationModifier = new NavDestinationModifier()
	@State _outlineNavigationModifier: NavigationModifier = new NavigationModifier()
	@State _outlineNavigatorModifier: NavigatorModifier = new NavigatorModifier()
	@State _outlineNavRouterModifier: NavRouterModifier = new NavRouterModifier()
	@State _outlinePanelModifier: PanelModifier = new PanelModifier()
	@State _outlinePathModifier: PathModifier = new PathModifier()
	@State _outlinePolygonModifier: PolygonModifier = new PolygonModifier()
	@State _outlinePolylineModifier: PolylineModifier = new PolylineModifier()
	@State _outlineProgressModifier: ProgressModifier = new ProgressModifier()
	@State _outlineQRCodeModifier: QRCodeModifier = new QRCodeModifier()
	@State _outlineRadioModifier: RadioModifier = new RadioModifier()
	@State _outlineRatingModifier: RatingModifier = new RatingModifier()
	@State _outlineRectModifier: RectModifier = new RectModifier()
	@State _outlineRefreshModifier: RefreshModifier = new RefreshModifier()
	@State _outlineRelativeContainerModifier: RelativeContainerModifier = new RelativeContainerModifier()
	@State _outlineRemoteWindowModifier: RemoteWindowModifier = new RemoteWindowModifier()
	@State _outlineRichEditorModifier: RichEditorModifier = new RichEditorModifier()
	@State _outlineRichTextModifier: RichTextModifier = new RichTextModifier()
	@State _outlineRowModifier: RowModifier = new RowModifier()
	@State _outlineRowSplitModifier: RowSplitModifier = new RowSplitModifier()
	@State _outlineScrollModifier: ScrollModifier = new ScrollModifier()
	@State _outlineScrollBarModifier: ScrollBarModifier = new ScrollBarModifier()
	@State _outlineSearchModifier: SearchModifier = new SearchModifier()
	@State _outlineSelectModifier: SelectModifier = new SelectModifier()
	@State _outlineShapeModifier: ShapeModifier = new ShapeModifier()
	@State _outlineSideBarContainerModifier: SideBarContainerModifier = new SideBarContainerModifier()
	@State _outlineSliderModifier: SliderModifier = new SliderModifier()
	@State _outlineSpanModifier: SpanModifier = new SpanModifier()
	@State _outlineStackModifier: StackModifier = new StackModifier()
	@State _outlineStepperModifier: StepperModifier = new StepperModifier()
	@State _outlineStepperItemModifier: StepperItemModifier = new StepperItemModifier()
	@State _outlineSwiperModifier: SwiperModifier = new SwiperModifier()
	@State _outlineTabContentModifier: TabContentModifier = new TabContentModifier()
	@State _outlineTabsModifier: TabsModifier = new TabsModifier()
	@State _outlineTextModifier: TextModifier = new TextModifier()
	@State _outlineTextAreaModifier: TextAreaModifier = new TextAreaModifier()
	@State _outlineTextClockModifier: TextClockModifier = new TextClockModifier()
	@State _outlineTextInputModifier: TextInputModifier = new TextInputModifier()
	@State _outlineTextPickerModifier: TextPickerModifier = new TextPickerModifier()
	@State _outlineTextTimerModifier: TextTimerModifier = new TextTimerModifier()
	@State _outlineTimePickerModifier: TimePickerModifier = new TimePickerModifier()
	@State _outlineToggleModifier: ToggleModifier = new ToggleModifier()
	@State _outlineVideoModifier: VideoModifier = new VideoModifier()
	@State _outlineWaterFlowModifier: WaterFlowModifier = new WaterFlowModifier()
	@State _outlineWebModifier: WebModifier = new WebModifier()
	@State _outlineWindowSceneModifier: WindowSceneModifier = new WindowSceneModifier()
	@State _outlineXComponentModifier: XComponentModifier = new XComponentModifier()
	@State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
	@State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''
	@State parentWidth: number = router.getParams() ? router.getParams()['view']['parentWidth'] : 0
	@State parentHeight: number = router.getParams() ? router.getParams()['view']['parentHeight'] : 0
	@State columns: number = router.getParams() ? router.getParams()['view']['columns'] : 0
	@State gutter: number = router.getParams() ? router.getParams()['view']['gutter'] : 0
	@State parentBackGroundColor: string = router.getParams() ? router.getParams()['view']['parentBackGroundColor'] : '#FFFF00'
	@State parentComponentKey: string = router.getParams() ? router.getParams()['view']['parentComponentKey'] : ''

	onPageShow() {
		console.info('outline translate page show called ')
		attrsManager.registerDataChange(value => {
			console.info('outline [registerDataChange] ' + JSON.stringify(value.outline))
			this._outlineAlphabetIndexerModifier.mOutline = value.outline
			this._outlineBadgeModifier.mOutline = value.outline
			this._outlineButtonModifier.mOutline = value.outline
			this._outlineBlankModifier.mOutline = value.outline
			this._outlineCalendarPickerModifier.mOutline = value.outline
			this._outlineCanvasModifier.mOutline = value.outline
			this._outlineCheckboxModifier.mOutline = value.outline
			this._outlineCheckboxGroupModifier.mOutline = value.outline
			this._outlineCircleModifier.mOutline = value.outline
			this._outlineColumnModifier.mOutline = value.outline
			this._outlineColumnSplitModifier.mOutline = value.outline
			this._outlineCounterModifier.mOutline = value.outline
			this._outlineDataPanelModifier.mOutline = value.outline
			this._outlineDatePickerModifier.mOutline = value.outline
			this._outlineDividerModifier.mOutline = value.outline
			this._outlineEllipseModifier.mOutline = value.outline
			this._outlineFlexModifier.mOutline = value.outline
			this._outlineFlowItemModifier.mOutline = value.outline
			this._outlineFormLinkModifier.mOutline = value.outline
			this._outlineGaugeModifier.mOutline = value.outline
			this._outlineGridModifier.mOutline = value.outline
			this._outlineGridColModifier.mOutline = value.outline
			this._outlineGridItemModifier.mOutline = value.outline
			this._outlineGridRowModifier.mOutline = value.outline
			this._outlineHyperlinkModifier.mOutline = value.outline
			this._outlineImageModifier.mOutline = value.outline
			this._outlineImageAnimatorModifier.mOutline = value.outline
			this._outlineLineModifier.mOutline = value.outline
			this._outlineListModifier.mOutline = value.outline
			this._outlineListItemModifier.mOutline = value.outline
			this._outlineListItemGroupModifier.mOutline = value.outline
			this._outlineLoadingProgressModifier.mOutline = value.outline
			this._outlineMarqueeModifier.mOutline = value.outline
			this._outlineMenuModifier.mOutline = value.outline
			this._outlineMenuItemModifier.mOutline = value.outline
			this._outlineMenuItemGroupModifier.mOutline = value.outline
			this._outlineNavDestinationModifier.mOutline = value.outline
			this._outlineNavigationModifier.mOutline = value.outline
			this._outlineNavigatorModifier.mOutline = value.outline
			this._outlineNavRouterModifier.mOutline = value.outline
			this._outlinePanelModifier.mOutline = value.outline
			this._outlinePathModifier.mOutline = value.outline
			this._outlinePolygonModifier.mOutline = value.outline
			this._outlinePolylineModifier.mOutline = value.outline
			this._outlineProgressModifier.mOutline = value.outline
			this._outlineQRCodeModifier.mOutline = value.outline
			this._outlineRadioModifier.mOutline = value.outline
			this._outlineRatingModifier.mOutline = value.outline
			this._outlineRectModifier.mOutline = value.outline
			this._outlineRefreshModifier.mOutline = value.outline
			this._outlineRelativeContainerModifier.mOutline = value.outline
			this._outlineRemoteWindowModifier.mOutline = value.outline
			this._outlineRichEditorModifier.mOutline = value.outline
			this._outlineRichTextModifier.mOutline = value.outline
			this._outlineRowModifier.mOutline = value.outline
			this._outlineRowSplitModifier.mOutline = value.outline
			this._outlineScrollModifier.mOutline = value.outline
			this._outlineScrollBarModifier.mOutline = value.outline
			this._outlineSearchModifier.mOutline = value.outline
			this._outlineSelectModifier.mOutline = value.outline
			this._outlineShapeModifier.mOutline = value.outline
			this._outlineSideBarContainerModifier.mOutline = value.outline
			this._outlineSliderModifier.mOutline = value.outline
			this._outlineSpanModifier.mOutline = value.outline
			this._outlineStackModifier.mOutline = value.outline
			this._outlineStepperModifier.mOutline = value.outline
			this._outlineStepperItemModifier.mOutline = value.outline
			this._outlineSwiperModifier.mOutline = value.outline
			this._outlineTabContentModifier.mOutline = value.outline
			this._outlineTabsModifier.mOutline = value.outline
			this._outlineTextModifier.mOutline = value.outline
			this._outlineTextAreaModifier.mOutline = value.outline
			this._outlineTextClockModifier.mOutline = value.outline
			this._outlineTextInputModifier.mOutline = value.outline
			this._outlineTextPickerModifier.mOutline = value.outline
			this._outlineTextTimerModifier.mOutline = value.outline
			this._outlineTimePickerModifier.mOutline = value.outline
			this._outlineToggleModifier.mOutline = value.outline
			this._outlineVideoModifier.mOutline = value.outline
			this._outlineWaterFlowModifier.mOutline = value.outline
			this._outlineWebModifier.mOutline = value.outline
			this._outlineWindowSceneModifier.mOutline = value.outline
			this._outlineXComponentModifier.mOutline = value.outline
		})
	}

	@Styles
  commonStyle() {
		.key(this.componentKey)
  }

	build() {
		Column() {
			if (this.targetView == 'AlphabetIndexer') {
				AlphabetIndexer({ arrayValue: ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G'], selected: 0 })
					.commonStyle()
					.attributeModifier(this._outlineAlphabetIndexerModifier)
			}
			if (this.targetView == 'Button') {
				Button('button1')
					.commonStyle()
					.attributeModifier(this._outlineButtonModifier)
			}
			if (this.targetView == 'Blank') {
				Blank()
					.backgroundColor(Color.Yellow)
					.commonStyle()
					.attributeModifier(this._outlineBlankModifier)
			}
			if (this.targetView == 'Checkbox') {
				Checkbox()
					.commonStyle()
					.attributeModifier(this._outlineCheckboxModifier)
			}
			if (this.targetView == 'CheckboxGroup') {
				CheckboxGroup({ group: 'checkboxGroup' })
					.commonStyle()
					.attributeModifier(this._outlineCheckboxGroupModifier)
			}
			if (this.targetView == 'DataPanel') {
				DataPanel({ values: [5, 10, 10, 7, 9, 10, 10, 10, 10] })
					.commonStyle()
					.attributeModifier(this._outlineDataPanelModifier)
			}
			if (this.targetView == 'DatePicker') {
				DatePicker({ start: new Date('1970-1-1'), end: new Date('2100-1-1') })
					.commonStyle()
					.attributeModifier(this._outlineDatePickerModifier)
			}
			if (this.targetView == 'Divider') {
				Divider()
					.commonStyle()
					.attributeModifier(this._outlineDividerModifier)
			}
			if (this.targetView == 'Gauge') {
				Gauge({ value: 105 })
					.colors([[0x317AF7, 1], [0x5BA854, 1], [0xE08C3A, 1], [0x9C554B, 1]])
					.commonStyle()
					.attributeModifier(this._outlineGaugeModifier)
			}
			if (this.targetView == 'Image') {
				Image($r('app.media.icon'))
					.commonStyle()
					.attributeModifier(this._outlineImageModifier)
			}
			if (this.targetView == 'ImageAnimator') {
				ImageAnimator()
					.images([{ src: $r('app.media.icon') }])
					.commonStyle()
					.attributeModifier(this._outlineImageAnimatorModifier)
			}
			if (this.targetView == 'LoadingProgress') {
				LoadingProgress()
					.commonStyle()
					.attributeModifier(this._outlineLoadingProgressModifier)
			}
			if (this.targetView == 'Marquee') {
				Marquee({ 
					start: true,
					step: 50,
					loop: Infinity,
					fromStart: true,
					src: 'Running Marquee starts rolling'
				})
					.commonStyle()
					.attributeModifier(this._outlineMarqueeModifier)
			}
			if (this.targetView == 'Navigation') {
				Navigation() {
				}
					.commonStyle()
					.attributeModifier(this._outlineNavigationModifier)
			}
			if (this.targetView == 'Menu') {
				Menu() {
					MenuItem({ startIcon: $r('app.media.icon'), content: 'Menu' })
				}
					.backgroundColor(Color.Yellow)
					.commonStyle()
					.attributeModifier(this._outlineMenuModifier)
			}
			if (this.targetView == 'NavRouter') {
				NavRouter() {
					Row() {
						Image($r('app.media.icon'))
					}

					NavDestination() {
						Text('NavDestination')
							.fontSize(10)
					}
				}
					.commonStyle()
					.attributeModifier(this._outlineNavRouterModifier)
			}
			if (this.targetView == 'Progress') {
				Progress({ value: 10, type: ProgressType.Eclipse })
					.commonStyle()
					.attributeModifier(this._outlineProgressModifier)
			}
			if (this.targetView == 'QRCode') {
				QRCode('Running Marquee starts rolling')
					.commonStyle()
					.attributeModifier(this._outlineQRCodeModifier)
			}
			if (this.targetView == 'Radio') {
				Radio({ value: 'Radio1', group: 'radioGroup' })
					.commonStyle()
					.attributeModifier(this._outlineRadioModifier)
			}
			if (this.targetView == 'Rating') {
				Rating({ rating: 3.5, indicator: false })
					.commonStyle()
					.attributeModifier(this._outlineRatingModifier)
			}
			if (this.targetView == 'ScrollBar') {
				ScrollBar({ scroller: new Scroller(), state: BarState.On }) {
					Text()
						.width(20)
						.height(100)
						.borderRadius(10)
						.backgroundColor('#C0C0C0')
				}
					.commonStyle()
					.attributeModifier(this._outlineScrollBarModifier)
			}
			if (this.targetView == 'Search') {
				Search()
					.commonStyle()
					.attributeModifier(this._outlineSearchModifier)
			}
			if (this.targetView == 'Select') {
				Select([{ value: 'aaa' }, { value: 'bbb' }])
					.commonStyle()
					.attributeModifier(this._outlineSelectModifier)
			}
			if (this.targetView == 'Slider') {
				Slider({ value: 50, min: 0, max: 100, style: SliderStyle.OutSet })
					.showTips(true)
					.commonStyle()
					.attributeModifier(this._outlineSliderModifier)
			}
			if (this.targetView == 'Stepper') {
				Stepper() {
					StepperItem() {
						Column() {
							Text('Page One')
						}
					}
				}
					.commonStyle()
					.attributeModifier(this._outlineStepperModifier)
			}
			if (this.targetView == 'StepperItem') {
				Stepper() {
					StepperItem() {
						Column() {
							Text('Page One')
						}
					}
						.backgroundColor(Color.Red)
						.commonStyle()
						.attributeModifier(this._outlineStepperItemModifier)
				}
					.backgroundColor(Color.Yellow)
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'Text') {
				Text('text1')
					.commonStyle()
					.attributeModifier(this._outlineTextModifier)
			}
			if (this.targetView == 'TextArea') {
				TextArea({ placeholder: 'The text area can hold an unlimited amount of text. input your word...' })
					.commonStyle()
					.attributeModifier(this._outlineTextAreaModifier)
			}
			if (this.targetView == 'TextClock') {
				TextClock({ timeZoneOffset: -8 })
					.format('hms')
					.commonStyle()
					.attributeModifier(this._outlineTextClockModifier)
			}
			if (this.targetView == 'TextInput') {
				TextInput({ placeholder: 'input your word...' })
					.commonStyle()
					.attributeModifier(this._outlineTextInputModifier)
			}
			if (this.targetView == 'TextPicker') {
				TextPicker({ range: ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G'] })
					.commonStyle()
					.attributeModifier(this._outlineTextPickerModifier)
			}
			if (this.targetView == 'TextTimer') {
				TextTimer({ isCountDown: true, count: 30000 })
					.format('mm:ss.SS')
					.fontColor(Color.Black)
					.commonStyle()
					.attributeModifier(this._outlineTextTimerModifier)
			}
			if (this.targetView == 'TimePicker') {
				TimePicker({ selected: new Date('2022-07-22T08:00:00') })
					.commonStyle()
					.attributeModifier(this._outlineTimePickerModifier)
			}
			if (this.targetView == 'Toggle') {
				Toggle({ type: ToggleType.Switch, isOn: false })
					.commonStyle()
					.attributeModifier(this._outlineToggleModifier)
			}
			if (this.targetView == 'Web') {
				Web({ src: 'www.example.com', controller: new WebController() })
					.commonStyle()
					.attributeModifier(this._outlineWebModifier)
			}
			if (this.targetView == 'Circle') {
				Circle()
					.width(150)
					.height(200)
					.commonStyle()
					.attributeModifier(this._outlineCircleModifier)
			}
			if (this.targetView == 'Ellipse') {
				Ellipse()
					.commonStyle()
					.attributeModifier(this._outlineEllipseModifier)
			}
			if (this.targetView == 'Line') {
				Line()
					.startPoint([0, 0])
					.endPoint([50, 100])
					.backgroundColor(Color.Black)
					.commonStyle()
					.attributeModifier(this._outlineLineModifier)
			}
			if (this.targetView == 'Polyline') {
				Polyline()
					.commonStyle()
					.attributeModifier(this._outlinePolylineModifier)
			}
			if (this.targetView == 'Polygon') {
				Polygon()
					.commonStyle()
					.attributeModifier(this._outlinePolygonModifier)
			}
			if (this.targetView == 'Path') {
				Path()
					.commonStyle()
					.attributeModifier(this._outlinePathModifier)
			}
			if (this.targetView == 'Rect') {
				Rect()
					.commonStyle()
					.attributeModifier(this._outlineRectModifier)
			}
			if (this.targetView == 'Shape') {
				Shape() {
					Rect()
						.width(100)
						.height(50)
				}
					.commonStyle()
					.attributeModifier(this._outlineShapeModifier)
			}
			if (this.targetView == 'Badge') {
				Badge({ count: 50, style: { color: 0xFFFFFF, fontSize: 16, badgeSize: 20, badgeColor: Color.Red } }) {
					Button('message')
						.width(100)
						.height(50)
						.backgroundColor(0x317aff)
				}
					.commonStyle()
					.attributeModifier(this._outlineBadgeModifier)
			}
			if (this.targetView == 'Column') {
				Column() {
					Button()
						.width(100)
						.height(50)
				}
					.commonStyle()
					.attributeModifier(this._outlineColumnModifier)
			}
			if (this.targetView == 'ColumnSplit') {
				ColumnSplit() {
					Text('1')
						.width('100%')
						.height(50)
						.backgroundColor(0xF5DEB3)
						.textAlign(TextAlign.Center)
				}
					.commonStyle()
					.attributeModifier(this._outlineColumnSplitModifier)
			}
			if (this.targetView == 'Counter') {
				Counter() {
				}
					.commonStyle()
					.attributeModifier(this._outlineCounterModifier)
			}
			if (this.targetView == 'Flex') {
				Flex() {
					Text('1')
						.width('20%')
						.height(50)
						.backgroundColor(0xF5DEB3)
				}
					.commonStyle()
					.attributeModifier(this._outlineFlexModifier)
			}
			if (this.targetView == 'GridRow') {
				GridRow({ columns: 1, direction: GridRowDirection.Row }) {
					ForEach(
						[Color.Red, Color.Orange, Color.Yellow, Color.Green, Color.Pink, Color.Grey, Color.Blue, Color.Brown],
						(color) => {
							GridCol({ span: { xs: 1, sm: 2, md: 3, lg: 4 } }) {
								Row()
									.width('100%')
									.height('20vp')
							}
								.borderColor(color)
								.borderWidth(2)
						}
					)
				}
					.commonStyle()
					.attributeModifier(this._outlineGridRowModifier)
			}
			if (this.targetView == 'Grid') {
				Grid() {
					ForEach(['0', '1', '2', '3', '4'], () => {
						ForEach(['0', '1', '2', '3', '4'], (day: string) => {
							GridItem() {
								Text(day)
									.backgroundColor(Color.White)
									.width('100%')
									.height('100%')
									.textAlign(TextAlign.Center)
							}
						})
					})
				}
					.columnsTemplate('1fr 1fr 1fr 1fr 1fr')
					.rowsTemplate('1fr 1fr 1fr 1fr 1fr')
					.backgroundColor(0xFAEEE0)
					.commonStyle()
					.attributeModifier(this._outlineGridModifier)
			}
			if (this.targetView == 'List') {
				List() {
				}
					.height('100%')
					.width('100%')
					.commonStyle()
					.attributeModifier(this._outlineListModifier)
			}
			if (this.targetView == 'ListItem') {
				List({ space: 20, initialIndex: 0 }) {
					ListItem() {
						Text('item1')
							.width('100%')
							.textAlign(TextAlign.Center)
							.backgroundColor(Color.White)
					}
						.commonStyle()
						.attributeModifier(this._outlineListItemModifier)
				}
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'ListItemGroup') {
				List({ space: 0, initialIndex: 0 }) {
					ListItemGroup()
						.backgroundColor(Color.Yellow)
						.commonStyle()
						.attributeModifier(this._outlineListItemGroupModifier)
				}
					.backgroundColor(Color.Pink)
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'Navigator') {
				Navigator() {
					Text('Go to back page')
						.width('100%')
						.height(20)
				}
					.backgroundColor(Color.Red)
					.commonStyle()
					.attributeModifier(this._outlineNavigatorModifier)
			}
			if (this.targetView == 'Panel') {
				Panel(true) {
					Text('Text')
				}
					.backgroundColor(Color.Yellow)
					.commonStyle()
					.attributeModifier(this._outlinePanelModifier)
			}
			if (this.targetView == 'Refresh') {
				Refresh({ refreshing: true }) {
					Text('123')
				}
					.commonStyle()
					.attributeModifier(this._outlineRefreshModifier)
			}
			if (this.targetView == 'RelativeContainer') {
				RelativeContainer() {
					Row()
						.width(100)
						.height(100)
						.backgroundColor('#FF3333')
						.alignRules({
							top: { anchor: '__container__', align: VerticalAlign.Top },
							left: { anchor: '__container__', align: HorizontalAlign.Start }
						})
						.id('constraintSize')
				}
					.commonStyle()
					.attributeModifier(this._outlineRelativeContainerModifier)
			}
			if (this.targetView == 'Row') {
				Row()
					.commonStyle()
					.attributeModifier(this._outlineRowModifier)
			}
			if (this.targetView == 'RowSplit') {
				RowSplit() {
					Text('Text')
				}
					.commonStyle()
					.attributeModifier(this._outlineRowSplitModifier)
			}
			if (this.targetView == 'Scroll') {
				Scroll() {
					Column() {
						ForEach([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], (item) => {
							Text('Scroll' + item.toString())
								.width('90%')
								.height(50)
								.backgroundColor(Color.White)
								.textAlign(TextAlign.Center)
						}, item => item)
					}
					.width('100%')
				}
					.scrollBar(BarState.On)
					.commonStyle()
					.attributeModifier(this._outlineScrollModifier)
			}
			if (this.targetView == 'SideBarContainer') {
				SideBarContainer(SideBarContainerType.Embed) {
					Column() {
						ForEach([1, 2, 3], (item) => {
							Column({ space: 5 }) {
								Image($r('app.media.icon'))
									.width(50)
									.height(50)
								Text('Index0' + item)
									.fontSize(25)
							}
						})
					}
						.width('100%')
						.justifyContent(FlexAlign.SpaceEvenly)
						.backgroundColor(Color.Green)

					Column() {
						Text('SideBarContainer content')
							.fontSize(25)
					}
						.backgroundColor(Color.Orange)
				}
					.commonStyle()
					.attributeModifier(this._outlineSideBarContainerModifier)
			}
			if (this.targetView == 'Stack') {
				Stack() {
				}
					.commonStyle()
					.attributeModifier(this._outlineStackModifier)
			}
			if (this.targetView == 'Swiper') {
				Swiper() {
					ForEach([1, 2, 3], (item: string) => {
						Text('Swiper' + item)
							.width('90%')
							.height(50)
					}, item => item)
				}
					.indicator(true)
					.backgroundColor(Color.White)
					.commonStyle()
					.attributeModifier(this._outlineSwiperModifier)
			}
			if (this.targetView == 'Tabs') {
				Tabs() {
					TabContent() {
						Column()
							.width('100%')
							.height('100%')
							.backgroundColor('#00CB87')
					}
				}
					.commonStyle()
					.attributeModifier(this._outlineTabsModifier)
			}
			if (this.targetView == 'TabContent') {
				Tabs() {
					TabContent() {
						Text('TabContent Test')
							.width('100%')
							.height('100%')
							.backgroundColor(Color.White)
					}
						.tabBar('Tabs1')
						.commonStyle()
						.attributeModifier(this._outlineTabContentModifier)
				}
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'WaterFlow') {
				WaterFlow() {
					ForEach([1, 2, 3, 4, 5, 6, 7, 8, 9], (item: number) => {
						FlowItem() {
							Column() {
								Text('WaterFlow' + item)
									.fontSize(12)
									.height('16')
								Image($r('app.media.icon'))
									.width(50)
									.height(50)
									.objectFit(ImageFit.Fill)
							}
						}
					}, item => item)
				}
					.commonStyle()
					.attributeModifier(this._outlineWaterFlowModifier)
			}
			if (this.targetView == 'GridCol') {
				GridRow({ columns: 1, direction: GridRowDirection.Row }) {
					GridCol() {
						Row()
							.width('100%')
							.height('20vp')
					}
						.backgroundColor(Color.Yellow)
						.commonStyle()
						.attributeModifier(this._outlineGridColModifier)
				}
					.backgroundColor(Color.Pink)
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'GridItem') {
				Grid() {
					GridItem() {
						Text('4')
							.backgroundColor(0xFAEEE0)
							.width('100%')
							.height('100%')
							.textAlign(TextAlign.Center)
					}
						.rowStart(1)
						.rowEnd(4)
						.backgroundColor(Color.Yellow)
						.commonStyle()
						.attributeModifier(this._outlineGridItemModifier)
				}
					.backgroundColor(Color.Pink)
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'FlowItem') {
				WaterFlow() {
					ForEach([1, 2, 3, 4, 5, 6, 7, 8, 9], (item: number) => {
						FlowItem() {
							Column() {
								Text('WaterFlow' + item)
									.fontSize(12)
									.height('16')
								Image($r('app.media.icon'))
									.width(50)
									.height(50)
									.objectFit(ImageFit.Fill)
							}
						}
						.backgroundColor(Color.Yellow)
						.commonStyle()
						.attributeModifier(this._outlineFlowItemModifier)
					}, item => item)
				}
					.backgroundColor(Color.Pink)
					.width('100%')
					.height('100%')
			}
			if (this.targetView == 'MenuItem') {
				Row() {
					Menu() {
						MenuItem({ startIcon: $r('app.media.icon'), content: 'MenuItem' })
							.commonStyle()
							.attributeModifier(this._outlineMenuItemModifier)
					}
						.backgroundColor(Color.Yellow)
						.width('100%')
						.height('100%')
				}
					.width('100%')
					.height('100%')
					.backgroundColor(Color.Green)
			}
			if (this.targetView == 'MenuItemGroup') {
				Row() {
					Menu() {
						MenuItemGroup({ header: 'MenuItemGroup' }) {
							MenuItem({ startIcon: $r('app.media.icon'), content: 'MenuItem' })
						}
							.commonStyle()
							.attributeModifier(this._outlineMenuItemGroupModifier)
					}
						.backgroundColor(Color.Yellow)
						.width('100%')
						.height('100%')
				}
					.width('100%')
					.height('100%')
					.backgroundColor(Color.Green)
			}
			if (this.targetView == 'CalendarPicker') {
				CalendarPicker({ hintRadius: 10, selected: new Date() })
					.commonStyle()
					.attributeModifier(this._outlineCalendarPickerModifier)
			}
			if (this.targetView == 'Canvas') {
				Canvas(new CanvasRenderingContext2D(new RenderingContextSettings(true)))
					.backgroundColor('#FFFF00')
					.commonStyle()
					.attributeModifier(this._outlineCanvasModifier)
			}
			if (this.targetView == 'FormLink') {
				FormLink({
					action: "router",
					abilityName: "EntryAbility",
					params: { 'message': 'testForRouter' }
				}) {
					Button("router event").width(120)
				}
					.commonStyle()
					.attributeModifier(this._outlineFormLinkModifier)
			}
			if (this.targetView == 'Hyperlink') {
				Hyperlink('https://example.com/', 'Go to the developer website') {
				}
					.commonStyle()
					.attributeModifier(this._outlineHyperlinkModifier)
			}
			if (this.targetView == 'Span') {
				Text() {
					Span('Span1')
						.commonStyle()
						.attributeModifier(this._outlineSpanModifier)
				}
			}
		}
		.width(this.parentWidth)
		.height(this.parentHeight)
		.backgroundColor(this.parentBackGroundColor || '#FFFF00')
		.key(this.parentComponentKey)
	}
}
