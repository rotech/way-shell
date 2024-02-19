/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __LOGIND_SESSION_DBUS_H__
#define __LOGIND_SESSION_DBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.login1.Session */

#define DBUS_TYPE_LOGIN1_SESSION (dbus_login1_session_get_type ())
#define DBUS_LOGIN1_SESSION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBUS_TYPE_LOGIN1_SESSION, DbusLogin1Session))
#define DBUS_IS_LOGIN1_SESSION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBUS_TYPE_LOGIN1_SESSION))
#define DBUS_LOGIN1_SESSION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), DBUS_TYPE_LOGIN1_SESSION, DbusLogin1SessionIface))

struct _DbusLogin1Session;
typedef struct _DbusLogin1Session DbusLogin1Session;
typedef struct _DbusLogin1SessionIface DbusLogin1SessionIface;

struct _DbusLogin1SessionIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_activate) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_kill) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_who,
    gint arg_signal_number);

  gboolean (*handle_lock) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_pause_device_complete) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    guint arg_major,
    guint arg_minor);

  gboolean (*handle_release_control) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_release_device) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    guint arg_major,
    guint arg_minor);

  gboolean (*handle_set_brightness) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_subsystem,
    const gchar *arg_name,
    guint arg_brightness);

  gboolean (*handle_set_display) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_display);

  gboolean (*handle_set_idle_hint) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_idle);

  gboolean (*handle_set_locked_hint) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_locked);

  gboolean (*handle_set_tty) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_tty_fd);

  gboolean (*handle_set_type) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_type);

  gboolean (*handle_take_control) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_force);

  gboolean (*handle_take_device) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    guint arg_major,
    guint arg_minor);

  gboolean (*handle_terminate) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_unlock) (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_active) (DbusLogin1Session *object);

  guint  (*get_audit) (DbusLogin1Session *object);

  const gchar * (*get_class) (DbusLogin1Session *object);

  const gchar * (*get_desktop) (DbusLogin1Session *object);

  const gchar * (*get_display) (DbusLogin1Session *object);

  const gchar * (*get_id) (DbusLogin1Session *object);

  gboolean  (*get_idle_hint) (DbusLogin1Session *object);

  guint64  (*get_idle_since_hint) (DbusLogin1Session *object);

  guint64  (*get_idle_since_hint_monotonic) (DbusLogin1Session *object);

  guint  (*get_leader) (DbusLogin1Session *object);

  gboolean  (*get_locked_hint) (DbusLogin1Session *object);

  const gchar * (*get_name) (DbusLogin1Session *object);

  gboolean  (*get_remote) (DbusLogin1Session *object);

  const gchar * (*get_remote_host) (DbusLogin1Session *object);

  const gchar * (*get_remote_user) (DbusLogin1Session *object);

  const gchar * (*get_scope) (DbusLogin1Session *object);

  GVariant * (*get_seat) (DbusLogin1Session *object);

  const gchar * (*get_service) (DbusLogin1Session *object);

  const gchar * (*get_state) (DbusLogin1Session *object);

  guint64  (*get_timestamp) (DbusLogin1Session *object);

  guint64  (*get_timestamp_monotonic) (DbusLogin1Session *object);

  const gchar * (*get_tty) (DbusLogin1Session *object);

  const gchar * (*get_type_) (DbusLogin1Session *object);

  GVariant * (*get_user) (DbusLogin1Session *object);

  guint  (*get_vtnr) (DbusLogin1Session *object);

  void (*lock) (
    DbusLogin1Session *object);

  void (*pause_device) (
    DbusLogin1Session *object,
    guint arg_major,
    guint arg_minor,
    const gchar *arg_type);

  void (*resume_device) (
    DbusLogin1Session *object,
    guint arg_major,
    guint arg_minor,
    GVariant *arg_fd);

  void (*unlock) (
    DbusLogin1Session *object);

};

GType dbus_login1_session_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *dbus_login1_session_interface_info (void);
guint dbus_login1_session_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void dbus_login1_session_complete_terminate (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_activate (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_lock (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_unlock (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_set_idle_hint (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_set_locked_hint (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_kill (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_take_control (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_release_control (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_set_type (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_set_display (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_set_tty (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_take_device (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation,
    GVariant *fd,
    gboolean inactive);

void dbus_login1_session_complete_release_device (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_pause_device_complete (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);

void dbus_login1_session_complete_set_brightness (
    DbusLogin1Session *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void dbus_login1_session_emit_pause_device (
    DbusLogin1Session *object,
    guint arg_major,
    guint arg_minor,
    const gchar *arg_type);

void dbus_login1_session_emit_resume_device (
    DbusLogin1Session *object,
    guint arg_major,
    guint arg_minor,
    GVariant *arg_fd);

void dbus_login1_session_emit_lock (
    DbusLogin1Session *object);

void dbus_login1_session_emit_unlock (
    DbusLogin1Session *object);



/* D-Bus method calls: */
void dbus_login1_session_call_terminate (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_terminate_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_terminate_sync (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_activate (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_activate_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_activate_sync (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_lock (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_lock_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_lock_sync (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_unlock (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_unlock_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_unlock_sync (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_set_idle_hint (
    DbusLogin1Session *proxy,
    gboolean arg_idle,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_set_idle_hint_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_set_idle_hint_sync (
    DbusLogin1Session *proxy,
    gboolean arg_idle,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_set_locked_hint (
    DbusLogin1Session *proxy,
    gboolean arg_locked,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_set_locked_hint_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_set_locked_hint_sync (
    DbusLogin1Session *proxy,
    gboolean arg_locked,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_kill (
    DbusLogin1Session *proxy,
    const gchar *arg_who,
    gint arg_signal_number,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_kill_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_kill_sync (
    DbusLogin1Session *proxy,
    const gchar *arg_who,
    gint arg_signal_number,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_take_control (
    DbusLogin1Session *proxy,
    gboolean arg_force,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_take_control_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_take_control_sync (
    DbusLogin1Session *proxy,
    gboolean arg_force,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_release_control (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_release_control_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_release_control_sync (
    DbusLogin1Session *proxy,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_set_type (
    DbusLogin1Session *proxy,
    const gchar *arg_type,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_set_type_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_set_type_sync (
    DbusLogin1Session *proxy,
    const gchar *arg_type,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_set_display (
    DbusLogin1Session *proxy,
    const gchar *arg_display,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_set_display_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_set_display_sync (
    DbusLogin1Session *proxy,
    const gchar *arg_display,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_set_tty (
    DbusLogin1Session *proxy,
    GVariant *arg_tty_fd,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_set_tty_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_set_tty_sync (
    DbusLogin1Session *proxy,
    GVariant *arg_tty_fd,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_take_device (
    DbusLogin1Session *proxy,
    guint arg_major,
    guint arg_minor,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_take_device_finish (
    DbusLogin1Session *proxy,
    GVariant **out_fd,
    gboolean *out_inactive,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_take_device_sync (
    DbusLogin1Session *proxy,
    guint arg_major,
    guint arg_minor,
    GVariant **out_fd,
    gboolean *out_inactive,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_release_device (
    DbusLogin1Session *proxy,
    guint arg_major,
    guint arg_minor,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_release_device_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_release_device_sync (
    DbusLogin1Session *proxy,
    guint arg_major,
    guint arg_minor,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_pause_device_complete (
    DbusLogin1Session *proxy,
    guint arg_major,
    guint arg_minor,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_pause_device_complete_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_pause_device_complete_sync (
    DbusLogin1Session *proxy,
    guint arg_major,
    guint arg_minor,
    GCancellable *cancellable,
    GError **error);

void dbus_login1_session_call_set_brightness (
    DbusLogin1Session *proxy,
    const gchar *arg_subsystem,
    const gchar *arg_name,
    guint arg_brightness,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dbus_login1_session_call_set_brightness_finish (
    DbusLogin1Session *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dbus_login1_session_call_set_brightness_sync (
    DbusLogin1Session *proxy,
    const gchar *arg_subsystem,
    const gchar *arg_name,
    guint arg_brightness,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *dbus_login1_session_get_id (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_id (DbusLogin1Session *object);
void dbus_login1_session_set_id (DbusLogin1Session *object, const gchar *value);

GVariant *dbus_login1_session_get_user (DbusLogin1Session *object);
GVariant *dbus_login1_session_dup_user (DbusLogin1Session *object);
void dbus_login1_session_set_user (DbusLogin1Session *object, GVariant *value);

const gchar *dbus_login1_session_get_name (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_name (DbusLogin1Session *object);
void dbus_login1_session_set_name (DbusLogin1Session *object, const gchar *value);

guint64 dbus_login1_session_get_timestamp (DbusLogin1Session *object);
void dbus_login1_session_set_timestamp (DbusLogin1Session *object, guint64 value);

guint64 dbus_login1_session_get_timestamp_monotonic (DbusLogin1Session *object);
void dbus_login1_session_set_timestamp_monotonic (DbusLogin1Session *object, guint64 value);

guint dbus_login1_session_get_vtnr (DbusLogin1Session *object);
void dbus_login1_session_set_vtnr (DbusLogin1Session *object, guint value);

GVariant *dbus_login1_session_get_seat (DbusLogin1Session *object);
GVariant *dbus_login1_session_dup_seat (DbusLogin1Session *object);
void dbus_login1_session_set_seat (DbusLogin1Session *object, GVariant *value);

const gchar *dbus_login1_session_get_tty (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_tty (DbusLogin1Session *object);
void dbus_login1_session_set_tty (DbusLogin1Session *object, const gchar *value);

const gchar *dbus_login1_session_get_display (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_display (DbusLogin1Session *object);
void dbus_login1_session_set_display (DbusLogin1Session *object, const gchar *value);

gboolean dbus_login1_session_get_remote (DbusLogin1Session *object);
void dbus_login1_session_set_remote (DbusLogin1Session *object, gboolean value);

const gchar *dbus_login1_session_get_remote_host (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_remote_host (DbusLogin1Session *object);
void dbus_login1_session_set_remote_host (DbusLogin1Session *object, const gchar *value);

const gchar *dbus_login1_session_get_remote_user (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_remote_user (DbusLogin1Session *object);
void dbus_login1_session_set_remote_user (DbusLogin1Session *object, const gchar *value);

const gchar *dbus_login1_session_get_service (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_service (DbusLogin1Session *object);
void dbus_login1_session_set_service (DbusLogin1Session *object, const gchar *value);

const gchar *dbus_login1_session_get_desktop (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_desktop (DbusLogin1Session *object);
void dbus_login1_session_set_desktop (DbusLogin1Session *object, const gchar *value);

const gchar *dbus_login1_session_get_scope (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_scope (DbusLogin1Session *object);
void dbus_login1_session_set_scope (DbusLogin1Session *object, const gchar *value);

guint dbus_login1_session_get_leader (DbusLogin1Session *object);
void dbus_login1_session_set_leader (DbusLogin1Session *object, guint value);

guint dbus_login1_session_get_audit (DbusLogin1Session *object);
void dbus_login1_session_set_audit (DbusLogin1Session *object, guint value);

const gchar *dbus_login1_session_get_type_ (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_type_ (DbusLogin1Session *object);
void dbus_login1_session_set_type_ (DbusLogin1Session *object, const gchar *value);

const gchar *dbus_login1_session_get_class (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_class (DbusLogin1Session *object);
void dbus_login1_session_set_class (DbusLogin1Session *object, const gchar *value);

gboolean dbus_login1_session_get_active (DbusLogin1Session *object);
void dbus_login1_session_set_active (DbusLogin1Session *object, gboolean value);

const gchar *dbus_login1_session_get_state (DbusLogin1Session *object);
gchar *dbus_login1_session_dup_state (DbusLogin1Session *object);
void dbus_login1_session_set_state (DbusLogin1Session *object, const gchar *value);

gboolean dbus_login1_session_get_idle_hint (DbusLogin1Session *object);
void dbus_login1_session_set_idle_hint (DbusLogin1Session *object, gboolean value);

guint64 dbus_login1_session_get_idle_since_hint (DbusLogin1Session *object);
void dbus_login1_session_set_idle_since_hint (DbusLogin1Session *object, guint64 value);

guint64 dbus_login1_session_get_idle_since_hint_monotonic (DbusLogin1Session *object);
void dbus_login1_session_set_idle_since_hint_monotonic (DbusLogin1Session *object, guint64 value);

gboolean dbus_login1_session_get_locked_hint (DbusLogin1Session *object);
void dbus_login1_session_set_locked_hint (DbusLogin1Session *object, gboolean value);


/* ---- */

#define DBUS_TYPE_LOGIN1_SESSION_PROXY (dbus_login1_session_proxy_get_type ())
#define DBUS_LOGIN1_SESSION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBUS_TYPE_LOGIN1_SESSION_PROXY, DbusLogin1SessionProxy))
#define DBUS_LOGIN1_SESSION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), DBUS_TYPE_LOGIN1_SESSION_PROXY, DbusLogin1SessionProxyClass))
#define DBUS_LOGIN1_SESSION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), DBUS_TYPE_LOGIN1_SESSION_PROXY, DbusLogin1SessionProxyClass))
#define DBUS_IS_LOGIN1_SESSION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBUS_TYPE_LOGIN1_SESSION_PROXY))
#define DBUS_IS_LOGIN1_SESSION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), DBUS_TYPE_LOGIN1_SESSION_PROXY))

typedef struct _DbusLogin1SessionProxy DbusLogin1SessionProxy;
typedef struct _DbusLogin1SessionProxyClass DbusLogin1SessionProxyClass;
typedef struct _DbusLogin1SessionProxyPrivate DbusLogin1SessionProxyPrivate;

struct _DbusLogin1SessionProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  DbusLogin1SessionProxyPrivate *priv;
};

struct _DbusLogin1SessionProxyClass
{
  GDBusProxyClass parent_class;
};

GType dbus_login1_session_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DbusLogin1SessionProxy, g_object_unref)
#endif

void dbus_login1_session_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
DbusLogin1Session *dbus_login1_session_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
DbusLogin1Session *dbus_login1_session_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void dbus_login1_session_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
DbusLogin1Session *dbus_login1_session_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
DbusLogin1Session *dbus_login1_session_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define DBUS_TYPE_LOGIN1_SESSION_SKELETON (dbus_login1_session_skeleton_get_type ())
#define DBUS_LOGIN1_SESSION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBUS_TYPE_LOGIN1_SESSION_SKELETON, DbusLogin1SessionSkeleton))
#define DBUS_LOGIN1_SESSION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), DBUS_TYPE_LOGIN1_SESSION_SKELETON, DbusLogin1SessionSkeletonClass))
#define DBUS_LOGIN1_SESSION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), DBUS_TYPE_LOGIN1_SESSION_SKELETON, DbusLogin1SessionSkeletonClass))
#define DBUS_IS_LOGIN1_SESSION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBUS_TYPE_LOGIN1_SESSION_SKELETON))
#define DBUS_IS_LOGIN1_SESSION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), DBUS_TYPE_LOGIN1_SESSION_SKELETON))

typedef struct _DbusLogin1SessionSkeleton DbusLogin1SessionSkeleton;
typedef struct _DbusLogin1SessionSkeletonClass DbusLogin1SessionSkeletonClass;
typedef struct _DbusLogin1SessionSkeletonPrivate DbusLogin1SessionSkeletonPrivate;

struct _DbusLogin1SessionSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  DbusLogin1SessionSkeletonPrivate *priv;
};

struct _DbusLogin1SessionSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType dbus_login1_session_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DbusLogin1SessionSkeleton, g_object_unref)
#endif

DbusLogin1Session *dbus_login1_session_skeleton_new (void);


G_END_DECLS

#endif /* __LOGIND_SESSION_DBUS_H__ */
