
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function CheckBox_Create(AOwner: TComponent): TCheckBox; extdecl;
begin
  Result :=  TCheckBox.Create(AOwner);
end;

procedure CheckBox_Free(AObj: TCheckBox); extdecl;
begin
  AObj.Free;
end;

function CheckBox_CanFocus(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function CheckBox_ContainsControl(AObj: TCheckBox; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function CheckBox_ControlAtPos(AObj: TCheckBox; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure CheckBox_DisableAlign(AObj: TCheckBox); extdecl;
begin
  AObj.DisableAlign;
end;

procedure CheckBox_EnableAlign(AObj: TCheckBox); extdecl;
begin
  AObj.EnableAlign;
end;

function CheckBox_FindChildControl(AObj: TCheckBox; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure CheckBox_FlipChildren(AObj: TCheckBox; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function CheckBox_Focused(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function CheckBox_HandleAllocated(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure CheckBox_InsertControl(AObj: TCheckBox; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure CheckBox_Invalidate(AObj: TCheckBox); extdecl;
begin
  AObj.Invalidate;
end;

procedure CheckBox_RemoveControl(AObj: TCheckBox; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure CheckBox_Realign(AObj: TCheckBox); extdecl;
begin
  AObj.Realign;
end;

procedure CheckBox_Repaint(AObj: TCheckBox); extdecl;
begin
  AObj.Repaint;
end;

procedure CheckBox_ScaleBy(AObj: TCheckBox; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure CheckBox_ScrollBy(AObj: TCheckBox; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure CheckBox_SetBounds(AObj: TCheckBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure CheckBox_SetFocus(AObj: TCheckBox); extdecl;
begin
  AObj.SetFocus;
end;

procedure CheckBox_Update(AObj: TCheckBox); extdecl;
begin
  AObj.Update;
end;

procedure CheckBox_BringToFront(AObj: TCheckBox); extdecl;
begin
  AObj.BringToFront;
end;

procedure CheckBox_ClientToScreen(AObj: TCheckBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure CheckBox_ClientToParent(AObj: TCheckBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function CheckBox_Dragging(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function CheckBox_HasParent(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure CheckBox_Hide(AObj: TCheckBox); extdecl;
begin
  AObj.Hide;
end;

function CheckBox_Perform(AObj: TCheckBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure CheckBox_Refresh(AObj: TCheckBox); extdecl;
begin
  AObj.Refresh;
end;

procedure CheckBox_ScreenToClient(AObj: TCheckBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure CheckBox_ParentToClient(AObj: TCheckBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure CheckBox_SendToBack(AObj: TCheckBox); extdecl;
begin
  AObj.SendToBack;
end;

procedure CheckBox_Show(AObj: TCheckBox); extdecl;
begin
  AObj.Show;
end;

function CheckBox_GetTextBuf(AObj: TCheckBox; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function CheckBox_GetTextLen(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure CheckBox_SetTextBuf(AObj: TCheckBox; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function CheckBox_FindComponent(AObj: TCheckBox; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function CheckBox_GetNamePath(AObj: TCheckBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure CheckBox_Assign(AObj: TCheckBox; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function CheckBox_ClassType(AObj: TCheckBox): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function CheckBox_ClassName(AObj: TCheckBox): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function CheckBox_InstanceSize(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function CheckBox_InheritsFrom(AObj: TCheckBox; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function CheckBox_Equals(AObj: TCheckBox; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CheckBox_GetHashCode(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CheckBox_ToString(AObj: TCheckBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function CheckBox_GetAction(AObj: TCheckBox): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure CheckBox_SetAction(AObj: TCheckBox; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function CheckBox_GetAlign(AObj: TCheckBox): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure CheckBox_SetAlign(AObj: TCheckBox; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function CheckBox_GetAlignment(AObj: TCheckBox): TLeftRight; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure CheckBox_SetAlignment(AObj: TCheckBox; AValue: TLeftRight); extdecl;
begin
  AObj.Alignment := AValue;
end;

function CheckBox_GetAllowGrayed(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.AllowGrayed;
end;

procedure CheckBox_SetAllowGrayed(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.AllowGrayed := AValue;
end;

function CheckBox_GetAnchors(AObj: TCheckBox): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure CheckBox_SetAnchors(AObj: TCheckBox; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function CheckBox_GetBiDiMode(AObj: TCheckBox): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure CheckBox_SetBiDiMode(AObj: TCheckBox; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function CheckBox_GetCaption(AObj: TCheckBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure CheckBox_SetCaption(AObj: TCheckBox; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function CheckBox_GetChecked(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.Checked;
end;

procedure CheckBox_SetChecked(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.Checked := AValue;
end;

function CheckBox_GetColor(AObj: TCheckBox): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure CheckBox_SetColor(AObj: TCheckBox; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function CheckBox_GetDoubleBuffered(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure CheckBox_SetDoubleBuffered(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function CheckBox_GetDragCursor(AObj: TCheckBox): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure CheckBox_SetDragCursor(AObj: TCheckBox; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function CheckBox_GetDragKind(AObj: TCheckBox): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure CheckBox_SetDragKind(AObj: TCheckBox; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function CheckBox_GetDragMode(AObj: TCheckBox): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure CheckBox_SetDragMode(AObj: TCheckBox; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function CheckBox_GetEnabled(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure CheckBox_SetEnabled(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function CheckBox_GetFont(AObj: TCheckBox): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure CheckBox_SetFont(AObj: TCheckBox; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function CheckBox_GetParentColor(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure CheckBox_SetParentColor(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function CheckBox_GetParentDoubleBuffered(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure CheckBox_SetParentDoubleBuffered(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function CheckBox_GetParentFont(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure CheckBox_SetParentFont(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function CheckBox_GetParentShowHint(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure CheckBox_SetParentShowHint(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function CheckBox_GetPopupMenu(AObj: TCheckBox): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure CheckBox_SetPopupMenu(AObj: TCheckBox; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function CheckBox_GetShowHint(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure CheckBox_SetShowHint(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function CheckBox_GetState(AObj: TCheckBox): TCheckBoxState; extdecl;
begin
  Result :=  AObj.State;
end;

procedure CheckBox_SetState(AObj: TCheckBox; AValue: TCheckBoxState); extdecl;
begin
  AObj.State := AValue;
end;

function CheckBox_GetTabOrder(AObj: TCheckBox): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure CheckBox_SetTabOrder(AObj: TCheckBox; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function CheckBox_GetTabStop(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure CheckBox_SetTabStop(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function CheckBox_GetVisible(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure CheckBox_SetVisible(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure CheckBox_SetOnClick(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure CheckBox_SetOnContextPopup(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure CheckBox_SetOnDragDrop(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure CheckBox_SetOnDragOver(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure CheckBox_SetOnEndDrag(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure CheckBox_SetOnEnter(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure CheckBox_SetOnExit(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure CheckBox_SetOnKeyDown(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure CheckBox_SetOnKeyPress(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure CheckBox_SetOnKeyUp(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure CheckBox_SetOnMouseDown(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure CheckBox_SetOnMouseEnter(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure CheckBox_SetOnMouseLeave(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure CheckBox_SetOnMouseMove(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure CheckBox_SetOnMouseUp(AObj: TCheckBox; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

function CheckBox_GetDockClientCount(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function CheckBox_GetDockSite(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure CheckBox_SetDockSite(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function CheckBox_GetMouseInClient(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function CheckBox_GetVisibleDockClientCount(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function CheckBox_GetBrush(AObj: TCheckBox): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function CheckBox_GetControlCount(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function CheckBox_GetHandle(AObj: TCheckBox): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function CheckBox_GetParentWindow(AObj: TCheckBox): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure CheckBox_SetParentWindow(AObj: TCheckBox; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function CheckBox_GetUseDockManager(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure CheckBox_SetUseDockManager(AObj: TCheckBox; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

procedure CheckBox_GetBoundsRect(AObj: TCheckBox; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure CheckBox_SetBoundsRect(AObj: TCheckBox; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function CheckBox_GetClientHeight(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure CheckBox_SetClientHeight(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure CheckBox_GetClientOrigin(AObj: TCheckBox; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure CheckBox_GetClientRect(AObj: TCheckBox; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function CheckBox_GetClientWidth(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure CheckBox_SetClientWidth(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function CheckBox_GetControlState(AObj: TCheckBox): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure CheckBox_SetControlState(AObj: TCheckBox; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function CheckBox_GetControlStyle(AObj: TCheckBox): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure CheckBox_SetControlStyle(AObj: TCheckBox; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function CheckBox_GetFloating(AObj: TCheckBox): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function CheckBox_GetParent(AObj: TCheckBox): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure CheckBox_SetParent(AObj: TCheckBox; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function CheckBox_GetLeft(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure CheckBox_SetLeft(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function CheckBox_GetTop(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure CheckBox_SetTop(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function CheckBox_GetWidth(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure CheckBox_SetWidth(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function CheckBox_GetHeight(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure CheckBox_SetHeight(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function CheckBox_GetCursor(AObj: TCheckBox): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure CheckBox_SetCursor(AObj: TCheckBox; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function CheckBox_GetHint(AObj: TCheckBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure CheckBox_SetHint(AObj: TCheckBox; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function CheckBox_GetComponentCount(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function CheckBox_GetComponentIndex(AObj: TCheckBox): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure CheckBox_SetComponentIndex(AObj: TCheckBox; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function CheckBox_GetOwner(AObj: TCheckBox): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function CheckBox_GetName(AObj: TCheckBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure CheckBox_SetName(AObj: TCheckBox; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function CheckBox_GetTag(AObj: TCheckBox): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure CheckBox_SetTag(AObj: TCheckBox; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function CheckBox_GetDockClients(AObj: TCheckBox; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function CheckBox_GetControls(AObj: TCheckBox; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function CheckBox_GetComponents(AObj: TCheckBox; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function CheckBox_StaticClassType: TClass; extdecl;
begin
  Result := TCheckBox;
end;

exports
  CheckBox_Create,
  CheckBox_Free,
  CheckBox_CanFocus,
  CheckBox_ContainsControl,
  CheckBox_ControlAtPos,
  CheckBox_DisableAlign,
  CheckBox_EnableAlign,
  CheckBox_FindChildControl,
  CheckBox_FlipChildren,
  CheckBox_Focused,
  CheckBox_HandleAllocated,
  CheckBox_InsertControl,
  CheckBox_Invalidate,
  CheckBox_RemoveControl,
  CheckBox_Realign,
  CheckBox_Repaint,
  CheckBox_ScaleBy,
  CheckBox_ScrollBy,
  CheckBox_SetBounds,
  CheckBox_SetFocus,
  CheckBox_Update,
  CheckBox_BringToFront,
  CheckBox_ClientToScreen,
  CheckBox_ClientToParent,
  CheckBox_Dragging,
  CheckBox_HasParent,
  CheckBox_Hide,
  CheckBox_Perform,
  CheckBox_Refresh,
  CheckBox_ScreenToClient,
  CheckBox_ParentToClient,
  CheckBox_SendToBack,
  CheckBox_Show,
  CheckBox_GetTextBuf,
  CheckBox_GetTextLen,
  CheckBox_SetTextBuf,
  CheckBox_FindComponent,
  CheckBox_GetNamePath,
  CheckBox_Assign,
  CheckBox_ClassType,
  CheckBox_ClassName,
  CheckBox_InstanceSize,
  CheckBox_InheritsFrom,
  CheckBox_Equals,
  CheckBox_GetHashCode,
  CheckBox_ToString,
  CheckBox_GetAction,
  CheckBox_SetAction,
  CheckBox_GetAlign,
  CheckBox_SetAlign,
  CheckBox_GetAlignment,
  CheckBox_SetAlignment,
  CheckBox_GetAllowGrayed,
  CheckBox_SetAllowGrayed,
  CheckBox_GetAnchors,
  CheckBox_SetAnchors,
  CheckBox_GetBiDiMode,
  CheckBox_SetBiDiMode,
  CheckBox_GetCaption,
  CheckBox_SetCaption,
  CheckBox_GetChecked,
  CheckBox_SetChecked,
  CheckBox_GetColor,
  CheckBox_SetColor,
  CheckBox_GetDoubleBuffered,
  CheckBox_SetDoubleBuffered,
  CheckBox_GetDragCursor,
  CheckBox_SetDragCursor,
  CheckBox_GetDragKind,
  CheckBox_SetDragKind,
  CheckBox_GetDragMode,
  CheckBox_SetDragMode,
  CheckBox_GetEnabled,
  CheckBox_SetEnabled,
  CheckBox_GetFont,
  CheckBox_SetFont,
  CheckBox_GetParentColor,
  CheckBox_SetParentColor,
  CheckBox_GetParentDoubleBuffered,
  CheckBox_SetParentDoubleBuffered,
  CheckBox_GetParentFont,
  CheckBox_SetParentFont,
  CheckBox_GetParentShowHint,
  CheckBox_SetParentShowHint,
  CheckBox_GetPopupMenu,
  CheckBox_SetPopupMenu,
  CheckBox_GetShowHint,
  CheckBox_SetShowHint,
  CheckBox_GetState,
  CheckBox_SetState,
  CheckBox_GetTabOrder,
  CheckBox_SetTabOrder,
  CheckBox_GetTabStop,
  CheckBox_SetTabStop,
  CheckBox_GetVisible,
  CheckBox_SetVisible,
  CheckBox_SetOnClick,
  CheckBox_SetOnContextPopup,
  CheckBox_SetOnDragDrop,
  CheckBox_SetOnDragOver,
  CheckBox_SetOnEndDrag,
  CheckBox_SetOnEnter,
  CheckBox_SetOnExit,
  CheckBox_SetOnKeyDown,
  CheckBox_SetOnKeyPress,
  CheckBox_SetOnKeyUp,
  CheckBox_SetOnMouseDown,
  CheckBox_SetOnMouseEnter,
  CheckBox_SetOnMouseLeave,
  CheckBox_SetOnMouseMove,
  CheckBox_SetOnMouseUp,
  CheckBox_GetDockClientCount,
  CheckBox_GetDockSite,
  CheckBox_SetDockSite,
  CheckBox_GetMouseInClient,
  CheckBox_GetVisibleDockClientCount,
  CheckBox_GetBrush,
  CheckBox_GetControlCount,
  CheckBox_GetHandle,
  CheckBox_GetParentWindow,
  CheckBox_SetParentWindow,
  CheckBox_GetUseDockManager,
  CheckBox_SetUseDockManager,
  CheckBox_GetBoundsRect,
  CheckBox_SetBoundsRect,
  CheckBox_GetClientHeight,
  CheckBox_SetClientHeight,
  CheckBox_GetClientOrigin,
  CheckBox_GetClientRect,
  CheckBox_GetClientWidth,
  CheckBox_SetClientWidth,
  CheckBox_GetControlState,
  CheckBox_SetControlState,
  CheckBox_GetControlStyle,
  CheckBox_SetControlStyle,
  CheckBox_GetFloating,
  CheckBox_GetParent,
  CheckBox_SetParent,
  CheckBox_GetLeft,
  CheckBox_SetLeft,
  CheckBox_GetTop,
  CheckBox_SetTop,
  CheckBox_GetWidth,
  CheckBox_SetWidth,
  CheckBox_GetHeight,
  CheckBox_SetHeight,
  CheckBox_GetCursor,
  CheckBox_SetCursor,
  CheckBox_GetHint,
  CheckBox_SetHint,
  CheckBox_GetComponentCount,
  CheckBox_GetComponentIndex,
  CheckBox_SetComponentIndex,
  CheckBox_GetOwner,
  CheckBox_GetName,
  CheckBox_SetName,
  CheckBox_GetTag,
  CheckBox_SetTag,
  CheckBox_GetDockClients,
  CheckBox_GetControls,
  CheckBox_GetComponents,
  CheckBox_StaticClassType;

