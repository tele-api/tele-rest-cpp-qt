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
 * OAISendPaidMediaRequest.h
 *
 * Request parameters for sendPaidMedia
 */

#ifndef OAISendPaidMediaRequest_H
#define OAISendPaidMediaRequest_H

#include <QJsonObject>

#include "OAIInputPaidMedia.h"
#include "OAIMessageEntity.h"
#include "OAIReplyParameters.h"
#include "OAISendMessageRequest_reply_markup.h"
#include "OAISendPaidMediaRequest_chat_id.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIInputPaidMedia;
class OAIMessageEntity;
class OAIReplyParameters;
class OAISendMessageRequest_reply_markup;

class OAISendPaidMediaRequest : public OAIObject {
public:
    OAISendPaidMediaRequest();
    OAISendPaidMediaRequest(QString json);
    ~OAISendPaidMediaRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISendPaidMediaRequest_chat_id getChatId() const;
    void setChatId(const OAISendPaidMediaRequest_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    qint32 getStarCount() const;
    void setStarCount(const qint32 &star_count);
    bool is_star_count_Set() const;
    bool is_star_count_Valid() const;

    QList<OAIInputPaidMedia> getMedia() const;
    void setMedia(const QList<OAIInputPaidMedia> &media);
    bool is_media_Set() const;
    bool is_media_Valid() const;

    QString getBusinessConnectionId() const;
    void setBusinessConnectionId(const QString &business_connection_id);
    bool is_business_connection_id_Set() const;
    bool is_business_connection_id_Valid() const;

    QString getPayload() const;
    void setPayload(const QString &payload);
    bool is_payload_Set() const;
    bool is_payload_Valid() const;

    QString getCaption() const;
    void setCaption(const QString &caption);
    bool is_caption_Set() const;
    bool is_caption_Valid() const;

    QString getParseMode() const;
    void setParseMode(const QString &parse_mode);
    bool is_parse_mode_Set() const;
    bool is_parse_mode_Valid() const;

    QList<OAIMessageEntity> getCaptionEntities() const;
    void setCaptionEntities(const QList<OAIMessageEntity> &caption_entities);
    bool is_caption_entities_Set() const;
    bool is_caption_entities_Valid() const;

    bool isShowCaptionAboveMedia() const;
    void setShowCaptionAboveMedia(const bool &show_caption_above_media);
    bool is_show_caption_above_media_Set() const;
    bool is_show_caption_above_media_Valid() const;

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

    OAISendPaidMediaRequest_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    qint32 m_star_count;
    bool m_star_count_isSet;
    bool m_star_count_isValid;

    QList<OAIInputPaidMedia> m_media;
    bool m_media_isSet;
    bool m_media_isValid;

    QString m_business_connection_id;
    bool m_business_connection_id_isSet;
    bool m_business_connection_id_isValid;

    QString m_payload;
    bool m_payload_isSet;
    bool m_payload_isValid;

    QString m_caption;
    bool m_caption_isSet;
    bool m_caption_isValid;

    QString m_parse_mode;
    bool m_parse_mode_isSet;
    bool m_parse_mode_isValid;

    QList<OAIMessageEntity> m_caption_entities;
    bool m_caption_entities_isSet;
    bool m_caption_entities_isValid;

    bool m_show_caption_above_media;
    bool m_show_caption_above_media_isSet;
    bool m_show_caption_above_media_isValid;

    bool m_disable_notification;
    bool m_disable_notification_isSet;
    bool m_disable_notification_isValid;

    bool m_protect_content;
    bool m_protect_content_isSet;
    bool m_protect_content_isValid;

    bool m_allow_paid_broadcast;
    bool m_allow_paid_broadcast_isSet;
    bool m_allow_paid_broadcast_isValid;

    OAIReplyParameters m_reply_parameters;
    bool m_reply_parameters_isSet;
    bool m_reply_parameters_isValid;

    OAISendMessageRequest_reply_markup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAISendPaidMediaRequest)

#endif // OAISendPaidMediaRequest_H
