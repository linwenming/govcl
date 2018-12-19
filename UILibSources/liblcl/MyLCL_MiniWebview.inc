
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function MiniWebview_Create(AOwner: TComponent): TMiniWebview; extdecl;
begin
  Result :=  TMiniWebview.Create(AOwner);
end;

procedure MiniWebview_Free(AObj: TMiniWebview); extdecl;
begin
  AObj.Free;
end;

procedure MiniWebview_Navigate(AObj: TMiniWebview; AURL: PChar); extdecl;
begin
  AObj.Navigate(AURL);
end;

procedure MiniWebview_GoBack(AObj: TMiniWebview); extdecl;
begin
  AObj.GoBack;
end;

procedure MiniWebview_GoForward(AObj: TMiniWebview); extdecl;
begin
  AObj.GoForward;
end;

procedure MiniWebview_GoHome(AObj: TMiniWebview); extdecl;
begin
  AObj.GoHome;
end;

procedure MiniWebview_GoSearch(AObj: TMiniWebview); extdecl;
begin
  AObj.GoSearch;
end;

procedure MiniWebview_Refresh(AObj: TMiniWebview); extdecl;
begin
  AObj.Refresh;
end;

procedure MiniWebview_Stop(AObj: TMiniWebview); extdecl;
begin
  AObj.Stop;
end;

procedure MiniWebview_SetBounds(AObj: TMiniWebview; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

function MiniWebview_CanFocus(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function MiniWebview_ContainsControl(AObj: TMiniWebview; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function MiniWebview_ControlAtPos(AObj: TMiniWebview; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure MiniWebview_DisableAlign(AObj: TMiniWebview); extdecl;
begin
  AObj.DisableAlign;
end;

procedure MiniWebview_EnableAlign(AObj: TMiniWebview); extdecl;
begin
  AObj.EnableAlign;
end;

function MiniWebview_FindChildControl(AObj: TMiniWebview; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure MiniWebview_FlipChildren(AObj: TMiniWebview; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function MiniWebview_Focused(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function MiniWebview_HandleAllocated(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure MiniWebview_InsertControl(AObj: TMiniWebview; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure MiniWebview_Invalidate(AObj: TMiniWebview); extdecl;
begin
  AObj.Invalidate;
end;

procedure MiniWebview_RemoveControl(AObj: TMiniWebview; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure MiniWebview_Realign(AObj: TMiniWebview); extdecl;
begin
  AObj.Realign;
end;

procedure MiniWebview_Repaint(AObj: TMiniWebview); extdecl;
begin
  AObj.Repaint;
end;

procedure MiniWebview_ScaleBy(AObj: TMiniWebview; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure MiniWebview_ScrollBy(AObj: TMiniWebview; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure MiniWebview_SetFocus(AObj: TMiniWebview); extdecl;
begin
  AObj.SetFocus;
end;

procedure MiniWebview_Update(AObj: TMiniWebview); extdecl;
begin
  AObj.Update;
end;

procedure MiniWebview_BringToFront(AObj: TMiniWebview); extdecl;
begin
  AObj.BringToFront;
end;

procedure MiniWebview_ClientToScreen(AObj: TMiniWebview; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure MiniWebview_ClientToParent(AObj: TMiniWebview; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function MiniWebview_Dragging(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function MiniWebview_HasParent(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure MiniWebview_Hide(AObj: TMiniWebview); extdecl;
begin
  AObj.Hide;
end;

function MiniWebview_Perform(AObj: TMiniWebview; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure MiniWebview_ScreenToClient(AObj: TMiniWebview; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure MiniWebview_ParentToClient(AObj: TMiniWebview; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure MiniWebview_SendToBack(AObj: TMiniWebview); extdecl;
begin
  AObj.SendToBack;
end;

procedure MiniWebview_Show(AObj: TMiniWebview); extdecl;
begin
  AObj.Show;
end;

function MiniWebview_GetTextBuf(AObj: TMiniWebview; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function MiniWebview_GetTextLen(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure MiniWebview_SetTextBuf(AObj: TMiniWebview; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function MiniWebview_FindComponent(AObj: TMiniWebview; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function MiniWebview_GetNamePath(AObj: TMiniWebview): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure MiniWebview_Assign(AObj: TMiniWebview; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function MiniWebview_ClassType(AObj: TMiniWebview): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function MiniWebview_ClassName(AObj: TMiniWebview): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function MiniWebview_InstanceSize(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function MiniWebview_InheritsFrom(AObj: TMiniWebview; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function MiniWebview_Equals(AObj: TMiniWebview; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function MiniWebview_GetHashCode(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function MiniWebview_ToString(AObj: TMiniWebview): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function MiniWebview_GetReadyState(AObj: TMiniWebview): TReadyState; extdecl;
begin
  Result :=  AObj.ReadyState;
end;

procedure MiniWebview_SetOnTitleChange(AObj: TMiniWebview; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnTitleChange}
  {$DEFINE EventMethodName := OnTitleChange}
  EventMethodCode
end;

function MiniWebview_GetDockClientCount(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function MiniWebview_GetDockSite(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure MiniWebview_SetDockSite(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function MiniWebview_GetDoubleBuffered(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure MiniWebview_SetDoubleBuffered(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function MiniWebview_GetVisibleDockClientCount(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function MiniWebview_GetBrush(AObj: TMiniWebview): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function MiniWebview_GetControlCount(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function MiniWebview_GetHandle(AObj: TMiniWebview): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function MiniWebview_GetParentWindow(AObj: TMiniWebview): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure MiniWebview_SetParentWindow(AObj: TMiniWebview; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function MiniWebview_GetTabOrder(AObj: TMiniWebview): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure MiniWebview_SetTabOrder(AObj: TMiniWebview; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function MiniWebview_GetTabStop(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure MiniWebview_SetTabStop(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function MiniWebview_GetUseDockManager(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure MiniWebview_SetUseDockManager(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function MiniWebview_GetEnabled(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure MiniWebview_SetEnabled(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function MiniWebview_GetAction(AObj: TMiniWebview): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure MiniWebview_SetAction(AObj: TMiniWebview; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function MiniWebview_GetAlign(AObj: TMiniWebview): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure MiniWebview_SetAlign(AObj: TMiniWebview; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function MiniWebview_GetAnchors(AObj: TMiniWebview): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure MiniWebview_SetAnchors(AObj: TMiniWebview; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function MiniWebview_GetBiDiMode(AObj: TMiniWebview): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure MiniWebview_SetBiDiMode(AObj: TMiniWebview; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure MiniWebview_GetBoundsRect(AObj: TMiniWebview; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure MiniWebview_SetBoundsRect(AObj: TMiniWebview; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function MiniWebview_GetClientHeight(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure MiniWebview_SetClientHeight(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure MiniWebview_GetClientOrigin(AObj: TMiniWebview; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure MiniWebview_GetClientRect(AObj: TMiniWebview; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function MiniWebview_GetClientWidth(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure MiniWebview_SetClientWidth(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function MiniWebview_GetControlState(AObj: TMiniWebview): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure MiniWebview_SetControlState(AObj: TMiniWebview; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function MiniWebview_GetControlStyle(AObj: TMiniWebview): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure MiniWebview_SetControlStyle(AObj: TMiniWebview; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function MiniWebview_GetFloating(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function MiniWebview_GetShowHint(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure MiniWebview_SetShowHint(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function MiniWebview_GetVisible(AObj: TMiniWebview): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure MiniWebview_SetVisible(AObj: TMiniWebview; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function MiniWebview_GetParent(AObj: TMiniWebview): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure MiniWebview_SetParent(AObj: TMiniWebview; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function MiniWebview_GetLeft(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure MiniWebview_SetLeft(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function MiniWebview_GetTop(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure MiniWebview_SetTop(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function MiniWebview_GetWidth(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure MiniWebview_SetWidth(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function MiniWebview_GetHeight(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure MiniWebview_SetHeight(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function MiniWebview_GetCursor(AObj: TMiniWebview): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure MiniWebview_SetCursor(AObj: TMiniWebview; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function MiniWebview_GetHint(AObj: TMiniWebview): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure MiniWebview_SetHint(AObj: TMiniWebview; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function MiniWebview_GetComponentCount(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function MiniWebview_GetComponentIndex(AObj: TMiniWebview): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure MiniWebview_SetComponentIndex(AObj: TMiniWebview; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function MiniWebview_GetOwner(AObj: TMiniWebview): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function MiniWebview_GetName(AObj: TMiniWebview): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure MiniWebview_SetName(AObj: TMiniWebview; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function MiniWebview_GetTag(AObj: TMiniWebview): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure MiniWebview_SetTag(AObj: TMiniWebview; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function MiniWebview_GetDockClients(AObj: TMiniWebview; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function MiniWebview_GetControls(AObj: TMiniWebview; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function MiniWebview_GetComponents(AObj: TMiniWebview; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function MiniWebview_StaticClassType: TClass; extdecl;
begin
  Result := TMiniWebview;
end;

exports
  MiniWebview_Create,
  MiniWebview_Free,
  MiniWebview_Navigate,
  MiniWebview_GoBack,
  MiniWebview_GoForward,
  MiniWebview_GoHome,
  MiniWebview_GoSearch,
  MiniWebview_Refresh,
  MiniWebview_Stop,
  MiniWebview_SetBounds,
  MiniWebview_CanFocus,
  MiniWebview_ContainsControl,
  MiniWebview_ControlAtPos,
  MiniWebview_DisableAlign,
  MiniWebview_EnableAlign,
  MiniWebview_FindChildControl,
  MiniWebview_FlipChildren,
  MiniWebview_Focused,
  MiniWebview_HandleAllocated,
  MiniWebview_InsertControl,
  MiniWebview_Invalidate,
  MiniWebview_RemoveControl,
  MiniWebview_Realign,
  MiniWebview_Repaint,
  MiniWebview_ScaleBy,
  MiniWebview_ScrollBy,
  MiniWebview_SetFocus,
  MiniWebview_Update,
  MiniWebview_BringToFront,
  MiniWebview_ClientToScreen,
  MiniWebview_ClientToParent,
  MiniWebview_Dragging,
  MiniWebview_HasParent,
  MiniWebview_Hide,
  MiniWebview_Perform,
  MiniWebview_ScreenToClient,
  MiniWebview_ParentToClient,
  MiniWebview_SendToBack,
  MiniWebview_Show,
  MiniWebview_GetTextBuf,
  MiniWebview_GetTextLen,
  MiniWebview_SetTextBuf,
  MiniWebview_FindComponent,
  MiniWebview_GetNamePath,
  MiniWebview_Assign,
  MiniWebview_ClassType,
  MiniWebview_ClassName,
  MiniWebview_InstanceSize,
  MiniWebview_InheritsFrom,
  MiniWebview_Equals,
  MiniWebview_GetHashCode,
  MiniWebview_ToString,
  MiniWebview_GetReadyState,
  MiniWebview_SetOnTitleChange,
  MiniWebview_GetDockClientCount,
  MiniWebview_GetDockSite,
  MiniWebview_SetDockSite,
  MiniWebview_GetDoubleBuffered,
  MiniWebview_SetDoubleBuffered,
  MiniWebview_GetVisibleDockClientCount,
  MiniWebview_GetBrush,
  MiniWebview_GetControlCount,
  MiniWebview_GetHandle,
  MiniWebview_GetParentWindow,
  MiniWebview_SetParentWindow,
  MiniWebview_GetTabOrder,
  MiniWebview_SetTabOrder,
  MiniWebview_GetTabStop,
  MiniWebview_SetTabStop,
  MiniWebview_GetUseDockManager,
  MiniWebview_SetUseDockManager,
  MiniWebview_GetEnabled,
  MiniWebview_SetEnabled,
  MiniWebview_GetAction,
  MiniWebview_SetAction,
  MiniWebview_GetAlign,
  MiniWebview_SetAlign,
  MiniWebview_GetAnchors,
  MiniWebview_SetAnchors,
  MiniWebview_GetBiDiMode,
  MiniWebview_SetBiDiMode,
  MiniWebview_GetBoundsRect,
  MiniWebview_SetBoundsRect,
  MiniWebview_GetClientHeight,
  MiniWebview_SetClientHeight,
  MiniWebview_GetClientOrigin,
  MiniWebview_GetClientRect,
  MiniWebview_GetClientWidth,
  MiniWebview_SetClientWidth,
  MiniWebview_GetControlState,
  MiniWebview_SetControlState,
  MiniWebview_GetControlStyle,
  MiniWebview_SetControlStyle,
  MiniWebview_GetFloating,
  MiniWebview_GetShowHint,
  MiniWebview_SetShowHint,
  MiniWebview_GetVisible,
  MiniWebview_SetVisible,
  MiniWebview_GetParent,
  MiniWebview_SetParent,
  MiniWebview_GetLeft,
  MiniWebview_SetLeft,
  MiniWebview_GetTop,
  MiniWebview_SetTop,
  MiniWebview_GetWidth,
  MiniWebview_SetWidth,
  MiniWebview_GetHeight,
  MiniWebview_SetHeight,
  MiniWebview_GetCursor,
  MiniWebview_SetCursor,
  MiniWebview_GetHint,
  MiniWebview_SetHint,
  MiniWebview_GetComponentCount,
  MiniWebview_GetComponentIndex,
  MiniWebview_SetComponentIndex,
  MiniWebview_GetOwner,
  MiniWebview_GetName,
  MiniWebview_SetName,
  MiniWebview_GetTag,
  MiniWebview_SetTag,
  MiniWebview_GetDockClients,
  MiniWebview_GetControls,
  MiniWebview_GetComponents,
  MiniWebview_StaticClassType;
