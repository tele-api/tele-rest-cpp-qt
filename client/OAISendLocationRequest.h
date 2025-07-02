/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAISendLocationRequest.h
 *
 * Request parameters for sendLocation
 */

#ifndef OAISendLocationRequest_H
#define OAISendLocationRequest_H

#include <QJsonObject>

#include "OAIReplyParameters.h"
#include "OAISendMessageRequest_chat_id.h"
#include "OAISendMessageRequest_reply_markup.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIReplyParameters;
class OAISendMessageRequest_reply_markup;

class OAISendLocationRequest : public OAIObject {
public:
    OAISendLocationRequest();
    OAISendLocationRequest(QString json);
    ~OAISendLocationRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISendMessageRequest_chat_id getChatId() const;
    void setChatId(const OAISendMessageRequest_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    double getLatitude() const;
    void setLatitude(const double &latitude);
    bool is_latitude_Set() const;
    bool is_latitude_Valid() const;

    double getLongitude() const;
    void setLongitude(const double &longitude);
    bool is_longitude_Set() const;
    bool is_longitude_Valid() const;

    QString getBusinessConnectionId() const;
    void setBusinessConnectionId(const QString &business_connection_id);
    bool is_business_connection_id_Set() const;
    bool is_business_connection_id_Valid() const;

    qint32 getMessageThreadId() const;
    void setMessageThreadId(const qint32 &message_thread_id);
    bool is_message_thread_id_Set() const;
    bool is_message_thread_id_Valid() const;

    double getHorizontalAccuracy() const;
    void setHorizontalAccuracy(const double &horizontal_accuracy);
    bool is_horizontal_accuracy_Set() const;
    bool is_horizontal_accuracy_Valid() const;

    qint32 getLivePeriod() const;
    void setLivePeriod(const qint32 &live_period);
    bool is_live_period_Set() const;
    bool is_live_period_Valid() const;

    qint32 getHeading() const;
    void setHeading(const qint32 &heading);
    bool is_heading_Set() const;
    bool is_heading_Valid() const;

    qint32 getProximityAlertRadius() const;
    void setProximityAlertRadius(const qint32 &proximity_alert_radius);
    bool is_proximity_alert_radius_Set() const;
    bool is_proximity_alert_radius_Valid() const;

    bool isDisableNotification() const;
    void setDisableNotification(const bool &disable_notification);
    bool is_disable_notification_Set() const;
    bool is_disable_notification_Valid() const;

    bool isProtectContent() const;
    void setProtectContent(const bool &protect_content);
    bool is_protect_content_Set() const;
    bool is_protect_content_Valid() const;

    bool isAllowPaidBroadcast() const;
    void setAllowPaidBroadcast(const bool &allow_paid_broadcast);
    bool is_allow_paid_broadcast_Set() const;
    bool is_allow_paid_broadcast_Valid() const;

    QString getMessageEffectId() const;
    void setMessageEffectId(const QString &message_effect_id);
    bool is_message_effect_id_Set() const;
    bool is_message_effect_id_Valid() const;

    OAIReplyParameters getReplyParameters() const;
    void setReplyParameters(const OAIReplyParameters &reply_parameters);
    bool is_reply_parameters_Set() const;
    bool is_reply_parameters_Valid() const;

    OAISendMessageRequest_reply_markup getReplyMarkup() const;
    void setReplyMarkup(const OAISendMessageRequest_reply_markup &reply_markup);
    bool is_reply_markup_Set() const;
    bool is_reply_markup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISendMessageRequest_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    double m_latitude;
    bool m_latitude_isSet;
    bool m_latitude_isValid;

    double m_longitude;
    bool m_longitude_isSet;
    bool m_longitude_isValid;

    QString m_business_connection_id;
    bool m_business_connection_id_isSet;
    bool m_business_connection_id_isValid;

    qint32 m_message_thread_id;
    bool m_message_thread_id_isSet;
    bool m_message_thread_id_isValid;

    double m_horizontal_accuracy;
    bool m_horizontal_accuracy_isSet;
    bool m_horizontal_accuracy_isValid;

    qint32 m_live_period;
    bool m_live_period_isSet;
    bool m_live_period_isValid;

    qint32 m_heading;
    bool m_heading_isSet;
    bool m_heading_isValid;

    qint32 m_proximity_alert_radius;
    bool m_proximity_alert_radius_isSet;
    bool m_proximity_alert_radius_isValid;

    bool m_disable_notification;
    bool m_disable_notification_isSet;
    bool m_disable_notification_isValid;

    bool m_protect_content;
    bool m_protect_content_isSet;
    bool m_protect_content_isValid;

    bool m_allow_paid_broadcast;
    bool m_allow_paid_broadcast_isSet;
    bool m_allow_paid_broadcast_isValid;

    QString m_message_effect_id;
    bool m_message_effect_id_isSet;
    bool m_message_effect_id_isValid;

    OAIReplyParameters m_reply_parameters;
    bool m_reply_parameters_isSet;
    bool m_reply_parameters_isValid;

    OAISendMessageRequest_reply_markup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAISendLocationRequest)

#endif // OAISendLocationRequest_H
