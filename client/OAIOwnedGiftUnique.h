/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAIOwnedGiftUnique.h
 *
 * Describes a unique gift received and owned by a user or a chat.
 */

#ifndef OAIOwnedGiftUnique_H
#define OAIOwnedGiftUnique_H

#include <QJsonObject>

#include "OAIUniqueGift.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUniqueGift;
class OAIUser;

class OAIOwnedGiftUnique : public OAIObject {
public:
    OAIOwnedGiftUnique();
    OAIOwnedGiftUnique(QString json);
    ~OAIOwnedGiftUnique() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    OAIUniqueGift getGift() const;
    void setGift(const OAIUniqueGift &gift);
    bool is_gift_Set() const;
    bool is_gift_Valid() const;

    qint32 getSendDate() const;
    void setSendDate(const qint32 &send_date);
    bool is_send_date_Set() const;
    bool is_send_date_Valid() const;

    QString getOwnedGiftId() const;
    void setOwnedGiftId(const QString &owned_gift_id);
    bool is_owned_gift_id_Set() const;
    bool is_owned_gift_id_Valid() const;

    OAIUser getSenderUser() const;
    void setSenderUser(const OAIUser &sender_user);
    bool is_sender_user_Set() const;
    bool is_sender_user_Valid() const;

    bool isIsSaved() const;
    void setIsSaved(const bool &is_saved);
    bool is_is_saved_Set() const;
    bool is_is_saved_Valid() const;

    bool isCanBeTransferred() const;
    void setCanBeTransferred(const bool &can_be_transferred);
    bool is_can_be_transferred_Set() const;
    bool is_can_be_transferred_Valid() const;

    qint32 getTransferStarCount() const;
    void setTransferStarCount(const qint32 &transfer_star_count);
    bool is_transfer_star_count_Set() const;
    bool is_transfer_star_count_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAIUniqueGift m_gift;
    bool m_gift_isSet;
    bool m_gift_isValid;

    qint32 m_send_date;
    bool m_send_date_isSet;
    bool m_send_date_isValid;

    QString m_owned_gift_id;
    bool m_owned_gift_id_isSet;
    bool m_owned_gift_id_isValid;

    OAIUser m_sender_user;
    bool m_sender_user_isSet;
    bool m_sender_user_isValid;

    bool m_is_saved;
    bool m_is_saved_isSet;
    bool m_is_saved_isValid;

    bool m_can_be_transferred;
    bool m_can_be_transferred_isSet;
    bool m_can_be_transferred_isValid;

    qint32 m_transfer_star_count;
    bool m_transfer_star_count_isSet;
    bool m_transfer_star_count_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIOwnedGiftUnique)

#endif // OAIOwnedGiftUnique_H
