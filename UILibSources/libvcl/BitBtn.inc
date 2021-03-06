
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function BitBtn_Create(AOwner: TComponent): TBitBtn; stdcall;
begin
  Result :=  TBitBtn.Create(AOwner);
end;

procedure BitBtn_Free(AObj: TBitBtn); stdcall;
begin
  AObj.Free;
end;

procedure BitBtn_Click(AObj: TBitBtn); stdcall;
begin
  AObj.Click;
end;

function BitBtn_CanFocus(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function BitBtn_ContainsControl(AObj: TBitBtn; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function BitBtn_ControlAtPos(AObj: TBitBtn; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure BitBtn_DisableAlign(AObj: TBitBtn); stdcall;
begin
  AObj.DisableAlign;
end;

procedure BitBtn_EnableAlign(AObj: TBitBtn); stdcall;
begin
  AObj.EnableAlign;
end;

function BitBtn_FindChildControl(AObj: TBitBtn; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure BitBtn_FlipChildren(AObj: TBitBtn; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function BitBtn_Focused(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function BitBtn_HandleAllocated(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure BitBtn_InsertControl(AObj: TBitBtn; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure BitBtn_Invalidate(AObj: TBitBtn); stdcall;
begin
  AObj.Invalidate;
end;

procedure BitBtn_PaintTo(AObj: TBitBtn; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure BitBtn_RemoveControl(AObj: TBitBtn; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure BitBtn_Realign(AObj: TBitBtn); stdcall;
begin
  AObj.Realign;
end;

procedure BitBtn_Repaint(AObj: TBitBtn); stdcall;
begin
  AObj.Repaint;
end;

procedure BitBtn_ScaleBy(AObj: TBitBtn; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure BitBtn_ScrollBy(AObj: TBitBtn; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure BitBtn_SetBounds(AObj: TBitBtn; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure BitBtn_SetFocus(AObj: TBitBtn); stdcall;
begin
  AObj.SetFocus;
end;

procedure BitBtn_Update(AObj: TBitBtn); stdcall;
begin
  AObj.Update;
end;

procedure BitBtn_UpdateControlState(AObj: TBitBtn); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure BitBtn_BringToFront(AObj: TBitBtn); stdcall;
begin
  AObj.BringToFront;
end;

procedure BitBtn_ClientToScreen(AObj: TBitBtn; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure BitBtn_ClientToParent(AObj: TBitBtn; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function BitBtn_Dragging(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function BitBtn_HasParent(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure BitBtn_Hide(AObj: TBitBtn); stdcall;
begin
  AObj.Hide;
end;

function BitBtn_Perform(AObj: TBitBtn; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure BitBtn_Refresh(AObj: TBitBtn); stdcall;
begin
  AObj.Refresh;
end;

procedure BitBtn_ScreenToClient(AObj: TBitBtn; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure BitBtn_ParentToClient(AObj: TBitBtn; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure BitBtn_SendToBack(AObj: TBitBtn); stdcall;
begin
  AObj.SendToBack;
end;

procedure BitBtn_Show(AObj: TBitBtn); stdcall;
begin
  AObj.Show;
end;

function BitBtn_GetTextBuf(AObj: TBitBtn; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function BitBtn_GetTextLen(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure BitBtn_SetTextBuf(AObj: TBitBtn; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function BitBtn_FindComponent(AObj: TBitBtn; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function BitBtn_GetNamePath(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure BitBtn_Assign(AObj: TBitBtn; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure BitBtn_DisposeOf(AObj: TBitBtn); stdcall;
begin
  AObj.DisposeOf;
end;

function BitBtn_ClassType(AObj: TBitBtn): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function BitBtn_ClassName(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function BitBtn_InstanceSize(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function BitBtn_InheritsFrom(AObj: TBitBtn; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function BitBtn_Equals(AObj: TBitBtn; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function BitBtn_GetHashCode(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function BitBtn_ToString(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function BitBtn_GetAction(AObj: TBitBtn): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure BitBtn_SetAction(AObj: TBitBtn; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function BitBtn_GetAlign(AObj: TBitBtn): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure BitBtn_SetAlign(AObj: TBitBtn; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function BitBtn_GetAnchors(AObj: TBitBtn): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure BitBtn_SetAnchors(AObj: TBitBtn; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function BitBtn_GetBiDiMode(AObj: TBitBtn): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure BitBtn_SetBiDiMode(AObj: TBitBtn; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function BitBtn_GetCancel(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Cancel;
end;

procedure BitBtn_SetCancel(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.Cancel := AValue;
end;

function BitBtn_GetCaption(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure BitBtn_SetCaption(AObj: TBitBtn; AValue: PChar); stdcall;
begin
  AObj.Caption := AValue;
end;

function BitBtn_GetDefault(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Default;
end;

procedure BitBtn_SetDefault(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.Default := AValue;
end;

function BitBtn_GetDoubleBuffered(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure BitBtn_SetDoubleBuffered(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function BitBtn_GetDragCursor(AObj: TBitBtn): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure BitBtn_SetDragCursor(AObj: TBitBtn; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function BitBtn_GetDragKind(AObj: TBitBtn): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure BitBtn_SetDragKind(AObj: TBitBtn; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function BitBtn_GetDragMode(AObj: TBitBtn): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure BitBtn_SetDragMode(AObj: TBitBtn; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function BitBtn_GetEnabled(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure BitBtn_SetEnabled(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function BitBtn_GetFont(AObj: TBitBtn): TFont; stdcall;
begin
  Result :=  AObj.Font;
end;

procedure BitBtn_SetFont(AObj: TBitBtn; AValue: TFont); stdcall;
begin
  AObj.Font := AValue;
end;

function BitBtn_GetGlyph(AObj: TBitBtn): TBitmap; stdcall;
begin
  Result :=  AObj.Glyph;
end;

procedure BitBtn_SetGlyph(AObj: TBitBtn; AValue: TBitmap); stdcall;
begin
  AObj.Glyph := AValue;
end;

function BitBtn_GetKind(AObj: TBitBtn): TBitBtnKind; stdcall;
begin
  Result :=  AObj.Kind;
end;

procedure BitBtn_SetKind(AObj: TBitBtn; AValue: TBitBtnKind); stdcall;
begin
  AObj.Kind := AValue;
end;

function BitBtn_GetLayout(AObj: TBitBtn): TButtonLayout; stdcall;
begin
  Result :=  AObj.Layout;
end;

procedure BitBtn_SetLayout(AObj: TBitBtn; AValue: TButtonLayout); stdcall;
begin
  AObj.Layout := AValue;
end;

function BitBtn_GetModalResult(AObj: TBitBtn): TModalResult; stdcall;
begin
  Result :=  AObj.ModalResult;
end;

procedure BitBtn_SetModalResult(AObj: TBitBtn; AValue: TModalResult); stdcall;
begin
  AObj.ModalResult := AValue;
end;

function BitBtn_GetNumGlyphs(AObj: TBitBtn): TNumGlyphs; stdcall;
begin
  Result :=  AObj.NumGlyphs;
end;

procedure BitBtn_SetNumGlyphs(AObj: TBitBtn; AValue: TNumGlyphs); stdcall;
begin
  AObj.NumGlyphs := AValue;
end;

function BitBtn_GetParentDoubleBuffered(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure BitBtn_SetParentDoubleBuffered(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function BitBtn_GetParentFont(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.ParentFont;
end;

procedure BitBtn_SetParentFont(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.ParentFont := AValue;
end;

function BitBtn_GetParentShowHint(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure BitBtn_SetParentShowHint(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function BitBtn_GetPopupMenu(AObj: TBitBtn): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure BitBtn_SetPopupMenu(AObj: TBitBtn; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function BitBtn_GetShowHint(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure BitBtn_SetShowHint(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function BitBtn_GetStyle(AObj: TBitBtn): TButtonStyle; stdcall;
begin
  Result :=  AObj.Style;
end;

procedure BitBtn_SetStyle(AObj: TBitBtn; AValue: TButtonStyle); stdcall;
begin
  AObj.Style := AValue;
end;

function BitBtn_GetSpacing(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.Spacing;
end;

procedure BitBtn_SetSpacing(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.Spacing := AValue;
end;

function BitBtn_GetTabOrder(AObj: TBitBtn): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure BitBtn_SetTabOrder(AObj: TBitBtn; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function BitBtn_GetTabStop(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure BitBtn_SetTabStop(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function BitBtn_GetVisible(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure BitBtn_SetVisible(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function BitBtn_GetWordWrap(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.WordWrap;
end;

procedure BitBtn_SetWordWrap(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.WordWrap := AValue;
end;

function BitBtn_GetStyleElements(AObj: TBitBtn): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure BitBtn_SetStyleElements(AObj: TBitBtn; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure BitBtn_SetOnClick(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnClick);
    Exit;
  end;
  AObj.OnClick := TEventClass.OnClick;
  TEventClass.Add(AObj, @TEventClass.OnClick, AEventId);
end;

procedure BitBtn_SetOnContextPopup(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    TEventClass.Remove(AObj, @TEventClass.OnContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := TEventClass.OnContextPopup;
  TEventClass.Add(AObj, @TEventClass.OnContextPopup, AEventId);
end;

procedure BitBtn_SetOnDragDrop(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := TEventClass.OnDragDrop;
  TEventClass.Add(AObj, @TEventClass.OnDragDrop, AEventId);
end;

procedure BitBtn_SetOnDragOver(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragOver);
    Exit;
  end;
  AObj.OnDragOver := TEventClass.OnDragOver;
  TEventClass.Add(AObj, @TEventClass.OnDragOver, AEventId);
end;

procedure BitBtn_SetOnEndDock(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDock);
    Exit;
  end;
  AObj.OnEndDock := TEventClass.OnEndDock;
  TEventClass.Add(AObj, @TEventClass.OnEndDock, AEventId);
end;

procedure BitBtn_SetOnEndDrag(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := TEventClass.OnEndDrag;
  TEventClass.Add(AObj, @TEventClass.OnEndDrag, AEventId);
end;

procedure BitBtn_SetOnEnter(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEnter);
    Exit;
  end;
  AObj.OnEnter := TEventClass.OnEnter;
  TEventClass.Add(AObj, @TEventClass.OnEnter, AEventId);
end;

procedure BitBtn_SetOnExit(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    TEventClass.Remove(AObj, @TEventClass.OnExit);
    Exit;
  end;
  AObj.OnExit := TEventClass.OnExit;
  TEventClass.Add(AObj, @TEventClass.OnExit, AEventId);
end;

procedure BitBtn_SetOnKeyDown(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, @TEventClass.OnKeyDown, AEventId);
end;

procedure BitBtn_SetOnKeyPress(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, @TEventClass.OnKeyPress, AEventId);
end;

procedure BitBtn_SetOnKeyUp(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, @TEventClass.OnKeyUp, AEventId);
end;

procedure BitBtn_SetOnMouseActivate(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseActivate := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseActivate);
    Exit;
  end;
  AObj.OnMouseActivate := TEventClass.OnMouseActivate;
  TEventClass.Add(AObj, @TEventClass.OnMouseActivate, AEventId);
end;

procedure BitBtn_SetOnMouseDown(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := TEventClass.OnMouseDown;
  TEventClass.Add(AObj, @TEventClass.OnMouseDown, AEventId);
end;

procedure BitBtn_SetOnMouseEnter(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := TEventClass.OnMouseEnter;
  TEventClass.Add(AObj, @TEventClass.OnMouseEnter, AEventId);
end;

procedure BitBtn_SetOnMouseLeave(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := TEventClass.OnMouseLeave;
  TEventClass.Add(AObj, @TEventClass.OnMouseLeave, AEventId);
end;

procedure BitBtn_SetOnMouseMove(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := TEventClass.OnMouseMove;
  TEventClass.Add(AObj, @TEventClass.OnMouseMove, AEventId);
end;

procedure BitBtn_SetOnMouseUp(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := TEventClass.OnMouseUp;
  TEventClass.Add(AObj, @TEventClass.OnMouseUp, AEventId);
end;

procedure BitBtn_SetOnStartDock(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnStartDock);
    Exit;
  end;
  AObj.OnStartDock := TEventClass.OnStartDock;
  TEventClass.Add(AObj, @TEventClass.OnStartDock, AEventId);
end;

function BitBtn_GetCommandLinkHint(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.CommandLinkHint);
end;

procedure BitBtn_SetCommandLinkHint(AObj: TBitBtn; AValue: PChar); stdcall;
begin
  AObj.CommandLinkHint := AValue;
end;

function BitBtn_GetDisabledImageIndex(AObj: TBitBtn): TImageIndex; stdcall;
begin
  Result :=  AObj.DisabledImageIndex;
end;

procedure BitBtn_SetDisabledImageIndex(AObj: TBitBtn; AValue: TImageIndex); stdcall;
begin
  AObj.DisabledImageIndex := AValue;
end;

function BitBtn_GetElevationRequired(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.ElevationRequired;
end;

procedure BitBtn_SetElevationRequired(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.ElevationRequired := AValue;
end;

function BitBtn_GetHotImageIndex(AObj: TBitBtn): TImageIndex; stdcall;
begin
  Result :=  AObj.HotImageIndex;
end;

procedure BitBtn_SetHotImageIndex(AObj: TBitBtn; AValue: TImageIndex); stdcall;
begin
  AObj.HotImageIndex := AValue;
end;

function BitBtn_GetImages(AObj: TBitBtn): TCustomImageList; stdcall;
begin
  Result :=  AObj.Images;
end;

procedure BitBtn_SetImages(AObj: TBitBtn; AValue: TCustomImageList); stdcall;
begin
  AObj.Images := AValue;
end;

function BitBtn_GetImageAlignment(AObj: TBitBtn): TImageAlignment; stdcall;
begin
  Result :=  AObj.ImageAlignment;
end;

procedure BitBtn_SetImageAlignment(AObj: TBitBtn; AValue: TImageAlignment); stdcall;
begin
  AObj.ImageAlignment := AValue;
end;

function BitBtn_GetImageIndex(AObj: TBitBtn): TImageIndex; stdcall;
begin
  Result :=  AObj.ImageIndex;
end;

procedure BitBtn_SetImageIndex(AObj: TBitBtn; AValue: TImageIndex); stdcall;
begin
  AObj.ImageIndex := AValue;
end;

function BitBtn_GetPressedImageIndex(AObj: TBitBtn): TImageIndex; stdcall;
begin
  Result :=  AObj.PressedImageIndex;
end;

procedure BitBtn_SetPressedImageIndex(AObj: TBitBtn; AValue: TImageIndex); stdcall;
begin
  AObj.PressedImageIndex := AValue;
end;

function BitBtn_GetSelectedImageIndex(AObj: TBitBtn): TImageIndex; stdcall;
begin
  Result :=  AObj.SelectedImageIndex;
end;

procedure BitBtn_SetSelectedImageIndex(AObj: TBitBtn; AValue: TImageIndex); stdcall;
begin
  AObj.SelectedImageIndex := AValue;
end;

function BitBtn_GetStylusHotImageIndex(AObj: TBitBtn): TImageIndex; stdcall;
begin
  Result :=  AObj.StylusHotImageIndex;
end;

procedure BitBtn_SetStylusHotImageIndex(AObj: TBitBtn; AValue: TImageIndex); stdcall;
begin
  AObj.StylusHotImageIndex := AValue;
end;

function BitBtn_GetDockClientCount(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function BitBtn_GetDockSite(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure BitBtn_SetDockSite(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function BitBtn_GetAlignDisabled(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function BitBtn_GetMouseInClient(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function BitBtn_GetVisibleDockClientCount(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function BitBtn_GetBrush(AObj: TBitBtn): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function BitBtn_GetControlCount(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function BitBtn_GetHandle(AObj: TBitBtn): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function BitBtn_GetParentWindow(AObj: TBitBtn): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure BitBtn_SetParentWindow(AObj: TBitBtn; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function BitBtn_GetUseDockManager(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure BitBtn_SetUseDockManager(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

procedure BitBtn_GetBoundsRect(AObj: TBitBtn; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure BitBtn_SetBoundsRect(AObj: TBitBtn; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function BitBtn_GetClientHeight(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure BitBtn_SetClientHeight(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure BitBtn_GetClientOrigin(AObj: TBitBtn; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure BitBtn_GetClientRect(AObj: TBitBtn; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function BitBtn_GetClientWidth(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure BitBtn_SetClientWidth(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function BitBtn_GetControlState(AObj: TBitBtn): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure BitBtn_SetControlState(AObj: TBitBtn; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function BitBtn_GetControlStyle(AObj: TBitBtn): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure BitBtn_SetControlStyle(AObj: TBitBtn; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function BitBtn_GetExplicitLeft(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function BitBtn_GetExplicitTop(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function BitBtn_GetExplicitWidth(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function BitBtn_GetExplicitHeight(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function BitBtn_GetFloating(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function BitBtn_GetParent(AObj: TBitBtn): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure BitBtn_SetParent(AObj: TBitBtn; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

procedure BitBtn_SetOnGesture(AObj: TBitBtn; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

function BitBtn_GetAlignWithMargins(AObj: TBitBtn): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure BitBtn_SetAlignWithMargins(AObj: TBitBtn; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function BitBtn_GetLeft(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure BitBtn_SetLeft(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function BitBtn_GetTop(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure BitBtn_SetTop(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function BitBtn_GetWidth(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure BitBtn_SetWidth(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function BitBtn_GetHeight(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure BitBtn_SetHeight(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function BitBtn_GetCursor(AObj: TBitBtn): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure BitBtn_SetCursor(AObj: TBitBtn; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function BitBtn_GetHint(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure BitBtn_SetHint(AObj: TBitBtn; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function BitBtn_GetMargins(AObj: TBitBtn): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure BitBtn_SetMargins(AObj: TBitBtn; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function BitBtn_GetCustomHint(AObj: TBitBtn): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure BitBtn_SetCustomHint(AObj: TBitBtn; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function BitBtn_GetComponentCount(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function BitBtn_GetComponentIndex(AObj: TBitBtn): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure BitBtn_SetComponentIndex(AObj: TBitBtn; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function BitBtn_GetOwner(AObj: TBitBtn): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function BitBtn_GetName(AObj: TBitBtn): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure BitBtn_SetName(AObj: TBitBtn; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function BitBtn_GetTag(AObj: TBitBtn): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure BitBtn_SetTag(AObj: TBitBtn; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function BitBtn_GetDockClients(AObj: TBitBtn; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function BitBtn_GetControls(AObj: TBitBtn; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function BitBtn_GetComponents(AObj: TBitBtn; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function BitBtn_StaticClassType: TClass; stdcall;
begin
  Result := TBitBtn;
end;

exports
  BitBtn_Create,
  BitBtn_Free,
  BitBtn_Click,
  BitBtn_CanFocus,
  BitBtn_ContainsControl,
  BitBtn_ControlAtPos,
  BitBtn_DisableAlign,
  BitBtn_EnableAlign,
  BitBtn_FindChildControl,
  BitBtn_FlipChildren,
  BitBtn_Focused,
  BitBtn_HandleAllocated,
  BitBtn_InsertControl,
  BitBtn_Invalidate,
  BitBtn_PaintTo,
  BitBtn_RemoveControl,
  BitBtn_Realign,
  BitBtn_Repaint,
  BitBtn_ScaleBy,
  BitBtn_ScrollBy,
  BitBtn_SetBounds,
  BitBtn_SetFocus,
  BitBtn_Update,
  BitBtn_UpdateControlState,
  BitBtn_BringToFront,
  BitBtn_ClientToScreen,
  BitBtn_ClientToParent,
  BitBtn_Dragging,
  BitBtn_HasParent,
  BitBtn_Hide,
  BitBtn_Perform,
  BitBtn_Refresh,
  BitBtn_ScreenToClient,
  BitBtn_ParentToClient,
  BitBtn_SendToBack,
  BitBtn_Show,
  BitBtn_GetTextBuf,
  BitBtn_GetTextLen,
  BitBtn_SetTextBuf,
  BitBtn_FindComponent,
  BitBtn_GetNamePath,
  BitBtn_Assign,
  BitBtn_DisposeOf,
  BitBtn_ClassType,
  BitBtn_ClassName,
  BitBtn_InstanceSize,
  BitBtn_InheritsFrom,
  BitBtn_Equals,
  BitBtn_GetHashCode,
  BitBtn_ToString,
  BitBtn_GetAction,
  BitBtn_SetAction,
  BitBtn_GetAlign,
  BitBtn_SetAlign,
  BitBtn_GetAnchors,
  BitBtn_SetAnchors,
  BitBtn_GetBiDiMode,
  BitBtn_SetBiDiMode,
  BitBtn_GetCancel,
  BitBtn_SetCancel,
  BitBtn_GetCaption,
  BitBtn_SetCaption,
  BitBtn_GetDefault,
  BitBtn_SetDefault,
  BitBtn_GetDoubleBuffered,
  BitBtn_SetDoubleBuffered,
  BitBtn_GetDragCursor,
  BitBtn_SetDragCursor,
  BitBtn_GetDragKind,
  BitBtn_SetDragKind,
  BitBtn_GetDragMode,
  BitBtn_SetDragMode,
  BitBtn_GetEnabled,
  BitBtn_SetEnabled,
  BitBtn_GetFont,
  BitBtn_SetFont,
  BitBtn_GetGlyph,
  BitBtn_SetGlyph,
  BitBtn_GetKind,
  BitBtn_SetKind,
  BitBtn_GetLayout,
  BitBtn_SetLayout,
  BitBtn_GetModalResult,
  BitBtn_SetModalResult,
  BitBtn_GetNumGlyphs,
  BitBtn_SetNumGlyphs,
  BitBtn_GetParentDoubleBuffered,
  BitBtn_SetParentDoubleBuffered,
  BitBtn_GetParentFont,
  BitBtn_SetParentFont,
  BitBtn_GetParentShowHint,
  BitBtn_SetParentShowHint,
  BitBtn_GetPopupMenu,
  BitBtn_SetPopupMenu,
  BitBtn_GetShowHint,
  BitBtn_SetShowHint,
  BitBtn_GetStyle,
  BitBtn_SetStyle,
  BitBtn_GetSpacing,
  BitBtn_SetSpacing,
  BitBtn_GetTabOrder,
  BitBtn_SetTabOrder,
  BitBtn_GetTabStop,
  BitBtn_SetTabStop,
  BitBtn_GetVisible,
  BitBtn_SetVisible,
  BitBtn_GetWordWrap,
  BitBtn_SetWordWrap,
  BitBtn_GetStyleElements,
  BitBtn_SetStyleElements,
  BitBtn_SetOnClick,
  BitBtn_SetOnContextPopup,
  BitBtn_SetOnDragDrop,
  BitBtn_SetOnDragOver,
  BitBtn_SetOnEndDock,
  BitBtn_SetOnEndDrag,
  BitBtn_SetOnEnter,
  BitBtn_SetOnExit,
  BitBtn_SetOnKeyDown,
  BitBtn_SetOnKeyPress,
  BitBtn_SetOnKeyUp,
  BitBtn_SetOnMouseActivate,
  BitBtn_SetOnMouseDown,
  BitBtn_SetOnMouseEnter,
  BitBtn_SetOnMouseLeave,
  BitBtn_SetOnMouseMove,
  BitBtn_SetOnMouseUp,
  BitBtn_SetOnStartDock,
  BitBtn_GetCommandLinkHint,
  BitBtn_SetCommandLinkHint,
  BitBtn_GetDisabledImageIndex,
  BitBtn_SetDisabledImageIndex,
  BitBtn_GetElevationRequired,
  BitBtn_SetElevationRequired,
  BitBtn_GetHotImageIndex,
  BitBtn_SetHotImageIndex,
  BitBtn_GetImages,
  BitBtn_SetImages,
  BitBtn_GetImageAlignment,
  BitBtn_SetImageAlignment,
  BitBtn_GetImageIndex,
  BitBtn_SetImageIndex,
  BitBtn_GetPressedImageIndex,
  BitBtn_SetPressedImageIndex,
  BitBtn_GetSelectedImageIndex,
  BitBtn_SetSelectedImageIndex,
  BitBtn_GetStylusHotImageIndex,
  BitBtn_SetStylusHotImageIndex,
  BitBtn_GetDockClientCount,
  BitBtn_GetDockSite,
  BitBtn_SetDockSite,
  BitBtn_GetAlignDisabled,
  BitBtn_GetMouseInClient,
  BitBtn_GetVisibleDockClientCount,
  BitBtn_GetBrush,
  BitBtn_GetControlCount,
  BitBtn_GetHandle,
  BitBtn_GetParentWindow,
  BitBtn_SetParentWindow,
  BitBtn_GetUseDockManager,
  BitBtn_SetUseDockManager,
  BitBtn_GetBoundsRect,
  BitBtn_SetBoundsRect,
  BitBtn_GetClientHeight,
  BitBtn_SetClientHeight,
  BitBtn_GetClientOrigin,
  BitBtn_GetClientRect,
  BitBtn_GetClientWidth,
  BitBtn_SetClientWidth,
  BitBtn_GetControlState,
  BitBtn_SetControlState,
  BitBtn_GetControlStyle,
  BitBtn_SetControlStyle,
  BitBtn_GetExplicitLeft,
  BitBtn_GetExplicitTop,
  BitBtn_GetExplicitWidth,
  BitBtn_GetExplicitHeight,
  BitBtn_GetFloating,
  BitBtn_GetParent,
  BitBtn_SetParent,
  BitBtn_SetOnGesture,
  BitBtn_GetAlignWithMargins,
  BitBtn_SetAlignWithMargins,
  BitBtn_GetLeft,
  BitBtn_SetLeft,
  BitBtn_GetTop,
  BitBtn_SetTop,
  BitBtn_GetWidth,
  BitBtn_SetWidth,
  BitBtn_GetHeight,
  BitBtn_SetHeight,
  BitBtn_GetCursor,
  BitBtn_SetCursor,
  BitBtn_GetHint,
  BitBtn_SetHint,
  BitBtn_GetMargins,
  BitBtn_SetMargins,
  BitBtn_GetCustomHint,
  BitBtn_SetCustomHint,
  BitBtn_GetComponentCount,
  BitBtn_GetComponentIndex,
  BitBtn_SetComponentIndex,
  BitBtn_GetOwner,
  BitBtn_GetName,
  BitBtn_SetName,
  BitBtn_GetTag,
  BitBtn_SetTag,
  BitBtn_GetDockClients,
  BitBtn_GetControls,
  BitBtn_GetComponents,
  BitBtn_StaticClassType;

