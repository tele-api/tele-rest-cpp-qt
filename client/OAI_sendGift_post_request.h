/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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
 * OAI_sendGift_post_request.h
 *
 * 
 */

#ifndef OAI_sendGift_post_request_H
#define OAI_sendGift_post_request_H

#include <QJsonObject>

#include "OAIMessageEntity.h"
#include "OAI_sendGift_post_request_chat_id.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIMessageEntity;

class OAI_sendGift_post_request : public OAIObject {
public:
    OAI_sendGift_post_request();
    OAI_sendGift_post_request(QString json);
    ~OAI_sendGift_post_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getGiftId() const;
    void setGiftId(const QString &gift_id);
    bool is_gift_id_Set() const;
    bool is_gift_id_Valid() const;

    qint32 getUserId() const;
    void setUserId(const qint32 &user_id);
    bool is_user_id_Set() const;
    bool is_user_id_Valid() const;

    OAI_sendGift_post_request_chat_id getChatId() const;
    void setChatId(const OAI_sendGift_post_request_chat_id &chat_id);
    bool is_chat_id_Set() const;
    bool is_chat_id_Valid() const;

    bool isPayForUpgrade() const;
    void setPayForUpgrade(const bool &pay_for_upgrade);
    bool is_pay_for_upgrade_Set() const;
    bool is_pay_for_upgrade_Valid() const;

    QString getText() const;
    void setText(const QString &text);
    bool is_text_Set() const;
    bool is_text_Valid() const;

    QString getTextParseMode() const;
    void setTextParseMode(const QString &text_parse_mode);
    bool is_text_parse_mode_Set() const;
    bool is_text_parse_mode_Valid() const;

    QList<OAIMessageEntity> getTextEntities() const;
    void setTextEntities(const QList<OAIMessageEntity> &text_entities);
    bool is_text_entities_Set() const;
    bool is_text_entities_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_gift_id;
    bool m_gift_id_isSet;
    bool m_gift_id_isValid;

    qint32 m_user_id;
    bool m_user_id_isSet;
    bool m_user_id_isValid;

    OAI_sendGift_post_request_chat_id m_chat_id;
    bool m_chat_id_isSet;
    bool m_chat_id_isValid;

    bool m_pay_for_upgrade;
    bool m_pay_for_upgrade_isSet;
    bool m_pay_for_upgrade_isValid;

    QString m_text;
    bool m_text_isSet;
    bool m_text_isValid;

    QString m_text_parse_mode;
    bool m_text_parse_mode_isSet;
    bool m_text_parse_mode_isValid;

    QList<OAIMessageEntity> m_text_entities;
    bool m_text_entities_isSet;
    bool m_text_entities_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAI_sendGift_post_request)

#endif // OAI_sendGift_post_request_H
