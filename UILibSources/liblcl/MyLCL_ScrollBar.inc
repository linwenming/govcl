
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function ScrollBar_Create(AOwner: TComponent): TScrollBar; extdecl;
begin
  Result :=  TScrollBar.Create(AOwner);
end;

procedure ScrollBar_Free(AObj: TScrollBar); extdecl;
begin
  AObj.Free;
end;

procedure ScrollBar_SetParams(AObj: TScrollBar; APosition: Integer; AMin: Integer; AMax: Integer); extdecl;
begin
  AObj.SetParams(APosition, AMin, AMax);
end;

function ScrollBar_CanFocus(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function ScrollBar_ContainsControl(AObj: TScrollBar; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function ScrollBar_ControlAtPos(AObj: TScrollBar; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure ScrollBar_DisableAlign(AObj: TScrollBar); extdecl;
begin
  AObj.DisableAlign;
end;

procedure ScrollBar_EnableAlign(AObj: TScrollBar); extdecl;
begin
  AObj.EnableAlign;
end;

function ScrollBar_FindChildControl(AObj: TScrollBar; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure ScrollBar_FlipChildren(AObj: TScrollBar; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ScrollBar_Focused(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function ScrollBar_HandleAllocated(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ScrollBar_InsertControl(AObj: TScrollBar; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure ScrollBar_Invalidate(AObj: TScrollBar); extdecl;
begin
  AObj.Invalidate;
end;

procedure ScrollBar_RemoveControl(AObj: TScrollBar; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure ScrollBar_Realign(AObj: TScrollBar); extdecl;
begin
  AObj.Realign;
end;

procedure ScrollBar_Repaint(AObj: TScrollBar); extdecl;
begin
  AObj.Repaint;
end;

procedure ScrollBar_ScaleBy(AObj: TScrollBar; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ScrollBar_ScrollBy(AObj: TScrollBar; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure ScrollBar_SetBounds(AObj: TScrollBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ScrollBar_SetFocus(AObj: TScrollBar); extdecl;
begin
  AObj.SetFocus;
end;

procedure ScrollBar_Update(AObj: TScrollBar); extdecl;
begin
  AObj.Update;
end;

procedure ScrollBar_BringToFront(AObj: TScrollBar); extdecl;
begin
  AObj.BringToFront;
end;

procedure ScrollBar_ClientToScreen(AObj: TScrollBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure ScrollBar_ClientToParent(AObj: TScrollBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function ScrollBar_Dragging(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function ScrollBar_HasParent(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ScrollBar_Hide(AObj: TScrollBar); extdecl;
begin
  AObj.Hide;
end;

function ScrollBar_Perform(AObj: TScrollBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ScrollBar_Refresh(AObj: TScrollBar); extdecl;
begin
  AObj.Refresh;
end;

procedure ScrollBar_ScreenToClient(AObj: TScrollBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure ScrollBar_ParentToClient(AObj: TScrollBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure ScrollBar_SendToBack(AObj: TScrollBar); extdecl;
begin
  AObj.SendToBack;
end;

procedure ScrollBar_Show(AObj: TScrollBar); extdecl;
begin
  AObj.Show;
end;

function ScrollBar_GetTextBuf(AObj: TScrollBar; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ScrollBar_GetTextLen(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure ScrollBar_SetTextBuf(AObj: TScrollBar; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function ScrollBar_FindComponent(AObj: TScrollBar; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ScrollBar_GetNamePath(AObj: TScrollBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ScrollBar_Assign(AObj: TScrollBar; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ScrollBar_ClassType(AObj: TScrollBar): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ScrollBar_ClassName(AObj: TScrollBar): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ScrollBar_InstanceSize(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ScrollBar_InheritsFrom(AObj: TScrollBar; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ScrollBar_Equals(AObj: TScrollBar; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ScrollBar_GetHashCode(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ScrollBar_ToString(AObj: TScrollBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function ScrollBar_GetAlign(AObj: TScrollBar): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure ScrollBar_SetAlign(AObj: TScrollBar; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function ScrollBar_GetAnchors(AObj: TScrollBar): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ScrollBar_SetAnchors(AObj: TScrollBar; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function ScrollBar_GetBiDiMode(AObj: TScrollBar): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ScrollBar_SetBiDiMode(AObj: TScrollBar; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ScrollBar_GetDoubleBuffered(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ScrollBar_SetDoubleBuffered(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ScrollBar_GetDragCursor(AObj: TScrollBar): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure ScrollBar_SetDragCursor(AObj: TScrollBar; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function ScrollBar_GetDragKind(AObj: TScrollBar): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure ScrollBar_SetDragKind(AObj: TScrollBar; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function ScrollBar_GetDragMode(AObj: TScrollBar): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure ScrollBar_SetDragMode(AObj: TScrollBar; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function ScrollBar_GetEnabled(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ScrollBar_SetEnabled(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function ScrollBar_GetLargeChange(AObj: TScrollBar): TScrollBarInc; extdecl;
begin
  Result :=  AObj.LargeChange;
end;

procedure ScrollBar_SetLargeChange(AObj: TScrollBar; AValue: TScrollBarInc); extdecl;
begin
  AObj.LargeChange := AValue;
end;

function ScrollBar_GetMax(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Max;
end;

procedure ScrollBar_SetMax(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Max := AValue;
end;

function ScrollBar_GetMin(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Min;
end;

procedure ScrollBar_SetMin(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Min := AValue;
end;

function ScrollBar_GetPageSize(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.PageSize;
end;

procedure ScrollBar_SetPageSize(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.PageSize := AValue;
end;

function ScrollBar_GetParentDoubleBuffered(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure ScrollBar_SetParentDoubleBuffered(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function ScrollBar_GetParentShowHint(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ScrollBar_SetParentShowHint(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ScrollBar_GetPopupMenu(AObj: TScrollBar): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ScrollBar_SetPopupMenu(AObj: TScrollBar; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ScrollBar_GetPosition(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Position;
end;

procedure ScrollBar_SetPosition(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Position := AValue;
end;

function ScrollBar_GetShowHint(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ScrollBar_SetShowHint(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function ScrollBar_GetSmallChange(AObj: TScrollBar): TScrollBarInc; extdecl;
begin
  Result :=  AObj.SmallChange;
end;

procedure ScrollBar_SetSmallChange(AObj: TScrollBar; AValue: TScrollBarInc); extdecl;
begin
  AObj.SmallChange := AValue;
end;

function ScrollBar_GetTabOrder(AObj: TScrollBar): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ScrollBar_SetTabOrder(AObj: TScrollBar; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function ScrollBar_GetTabStop(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ScrollBar_SetTabStop(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function ScrollBar_GetVisible(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ScrollBar_SetVisible(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure ScrollBar_SetOnContextPopup(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure ScrollBar_SetOnChange(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChange}
  {$DEFINE EventMethodName := OnChange}
  EventMethodCode
end;

procedure ScrollBar_SetOnDragDrop(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure ScrollBar_SetOnDragOver(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure ScrollBar_SetOnEndDrag(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure ScrollBar_SetOnEnter(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure ScrollBar_SetOnExit(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure ScrollBar_SetOnKeyDown(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure ScrollBar_SetOnKeyPress(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure ScrollBar_SetOnKeyUp(AObj: TScrollBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

function ScrollBar_GetDockClientCount(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function ScrollBar_GetDockSite(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure ScrollBar_SetDockSite(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function ScrollBar_GetMouseInClient(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function ScrollBar_GetVisibleDockClientCount(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function ScrollBar_GetBrush(AObj: TScrollBar): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function ScrollBar_GetControlCount(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ScrollBar_GetHandle(AObj: TScrollBar): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function ScrollBar_GetParentWindow(AObj: TScrollBar): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ScrollBar_SetParentWindow(AObj: TScrollBar; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ScrollBar_GetUseDockManager(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure ScrollBar_SetUseDockManager(AObj: TScrollBar; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function ScrollBar_GetAction(AObj: TScrollBar): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure ScrollBar_SetAction(AObj: TScrollBar; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure ScrollBar_GetBoundsRect(AObj: TScrollBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ScrollBar_SetBoundsRect(AObj: TScrollBar; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ScrollBar_GetClientHeight(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ScrollBar_SetClientHeight(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ScrollBar_GetClientOrigin(AObj: TScrollBar; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure ScrollBar_GetClientRect(AObj: TScrollBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ScrollBar_GetClientWidth(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ScrollBar_SetClientWidth(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ScrollBar_GetControlState(AObj: TScrollBar): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure ScrollBar_SetControlState(AObj: TScrollBar; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function ScrollBar_GetControlStyle(AObj: TScrollBar): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure ScrollBar_SetControlStyle(AObj: TScrollBar; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function ScrollBar_GetFloating(AObj: TScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function ScrollBar_GetParent(AObj: TScrollBar): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ScrollBar_SetParent(AObj: TScrollBar; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function ScrollBar_GetLeft(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure ScrollBar_SetLeft(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function ScrollBar_GetTop(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure ScrollBar_SetTop(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function ScrollBar_GetWidth(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure ScrollBar_SetWidth(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function ScrollBar_GetHeight(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure ScrollBar_SetHeight(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function ScrollBar_GetCursor(AObj: TScrollBar): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ScrollBar_SetCursor(AObj: TScrollBar; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function ScrollBar_GetHint(AObj: TScrollBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure ScrollBar_SetHint(AObj: TScrollBar; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function ScrollBar_GetComponentCount(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ScrollBar_GetComponentIndex(AObj: TScrollBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ScrollBar_SetComponentIndex(AObj: TScrollBar; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ScrollBar_GetOwner(AObj: TScrollBar): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function ScrollBar_GetName(AObj: TScrollBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure ScrollBar_SetName(AObj: TScrollBar; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function ScrollBar_GetTag(AObj: TScrollBar): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ScrollBar_SetTag(AObj: TScrollBar; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function ScrollBar_GetDockClients(AObj: TScrollBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function ScrollBar_GetControls(AObj: TScrollBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ScrollBar_GetComponents(AObj: TScrollBar; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function ScrollBar_StaticClassType: TClass; extdecl;
begin
  Result := TScrollBar;
end;

exports
  ScrollBar_Create,
  ScrollBar_Free,
  ScrollBar_SetParams,
  ScrollBar_CanFocus,
  ScrollBar_ContainsControl,
  ScrollBar_ControlAtPos,
  ScrollBar_DisableAlign,
  ScrollBar_EnableAlign,
  ScrollBar_FindChildControl,
  ScrollBar_FlipChildren,
  ScrollBar_Focused,
  ScrollBar_HandleAllocated,
  ScrollBar_InsertControl,
  ScrollBar_Invalidate,
  ScrollBar_RemoveControl,
  ScrollBar_Realign,
  ScrollBar_Repaint,
  ScrollBar_ScaleBy,
  ScrollBar_ScrollBy,
  ScrollBar_SetBounds,
  ScrollBar_SetFocus,
  ScrollBar_Update,
  ScrollBar_BringToFront,
  ScrollBar_ClientToScreen,
  ScrollBar_ClientToParent,
  ScrollBar_Dragging,
  ScrollBar_HasParent,
  ScrollBar_Hide,
  ScrollBar_Perform,
  ScrollBar_Refresh,
  ScrollBar_ScreenToClient,
  ScrollBar_ParentToClient,
  ScrollBar_SendToBack,
  ScrollBar_Show,
  ScrollBar_GetTextBuf,
  ScrollBar_GetTextLen,
  ScrollBar_SetTextBuf,
  ScrollBar_FindComponent,
  ScrollBar_GetNamePath,
  ScrollBar_Assign,
  ScrollBar_ClassType,
  ScrollBar_ClassName,
  ScrollBar_InstanceSize,
  ScrollBar_InheritsFrom,
  ScrollBar_Equals,
  ScrollBar_GetHashCode,
  ScrollBar_ToString,
  ScrollBar_GetAlign,
  ScrollBar_SetAlign,
  ScrollBar_GetAnchors,
  ScrollBar_SetAnchors,
  ScrollBar_GetBiDiMode,
  ScrollBar_SetBiDiMode,
  ScrollBar_GetDoubleBuffered,
  ScrollBar_SetDoubleBuffered,
  ScrollBar_GetDragCursor,
  ScrollBar_SetDragCursor,
  ScrollBar_GetDragKind,
  ScrollBar_SetDragKind,
  ScrollBar_GetDragMode,
  ScrollBar_SetDragMode,
  ScrollBar_GetEnabled,
  ScrollBar_SetEnabled,
  ScrollBar_GetLargeChange,
  ScrollBar_SetLargeChange,
  ScrollBar_GetMax,
  ScrollBar_SetMax,
  ScrollBar_GetMin,
  ScrollBar_SetMin,
  ScrollBar_GetPageSize,
  ScrollBar_SetPageSize,
  ScrollBar_GetParentDoubleBuffered,
  ScrollBar_SetParentDoubleBuffered,
  ScrollBar_GetParentShowHint,
  ScrollBar_SetParentShowHint,
  ScrollBar_GetPopupMenu,
  ScrollBar_SetPopupMenu,
  ScrollBar_GetPosition,
  ScrollBar_SetPosition,
  ScrollBar_GetShowHint,
  ScrollBar_SetShowHint,
  ScrollBar_GetSmallChange,
  ScrollBar_SetSmallChange,
  ScrollBar_GetTabOrder,
  ScrollBar_SetTabOrder,
  ScrollBar_GetTabStop,
  ScrollBar_SetTabStop,
  ScrollBar_GetVisible,
  ScrollBar_SetVisible,
  ScrollBar_SetOnContextPopup,
  ScrollBar_SetOnChange,
  ScrollBar_SetOnDragDrop,
  ScrollBar_SetOnDragOver,
  ScrollBar_SetOnEndDrag,
  ScrollBar_SetOnEnter,
  ScrollBar_SetOnExit,
  ScrollBar_SetOnKeyDown,
  ScrollBar_SetOnKeyPress,
  ScrollBar_SetOnKeyUp,
  ScrollBar_GetDockClientCount,
  ScrollBar_GetDockSite,
  ScrollBar_SetDockSite,
  ScrollBar_GetMouseInClient,
  ScrollBar_GetVisibleDockClientCount,
  ScrollBar_GetBrush,
  ScrollBar_GetControlCount,
  ScrollBar_GetHandle,
  ScrollBar_GetParentWindow,
  ScrollBar_SetParentWindow,
  ScrollBar_GetUseDockManager,
  ScrollBar_SetUseDockManager,
  ScrollBar_GetAction,
  ScrollBar_SetAction,
  ScrollBar_GetBoundsRect,
  ScrollBar_SetBoundsRect,
  ScrollBar_GetClientHeight,
  ScrollBar_SetClientHeight,
  ScrollBar_GetClientOrigin,
  ScrollBar_GetClientRect,
  ScrollBar_GetClientWidth,
  ScrollBar_SetClientWidth,
  ScrollBar_GetControlState,
  ScrollBar_SetControlState,
  ScrollBar_GetControlStyle,
  ScrollBar_SetControlStyle,
  ScrollBar_GetFloating,
  ScrollBar_GetParent,
  ScrollBar_SetParent,
  ScrollBar_GetLeft,
  ScrollBar_SetLeft,
  ScrollBar_GetTop,
  ScrollBar_SetTop,
  ScrollBar_GetWidth,
  ScrollBar_SetWidth,
  ScrollBar_GetHeight,
  ScrollBar_SetHeight,
  ScrollBar_GetCursor,
  ScrollBar_SetCursor,
  ScrollBar_GetHint,
  ScrollBar_SetHint,
  ScrollBar_GetComponentCount,
  ScrollBar_GetComponentIndex,
  ScrollBar_SetComponentIndex,
  ScrollBar_GetOwner,
  ScrollBar_GetName,
  ScrollBar_SetName,
  ScrollBar_GetTag,
  ScrollBar_SetTag,
  ScrollBar_GetDockClients,
  ScrollBar_GetControls,
  ScrollBar_GetComponents,
  ScrollBar_StaticClassType;

